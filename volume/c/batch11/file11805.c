// fichero 11805 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11805;

Registro11805 crear_registro11805(int id) {
    Registro11805 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11805(Registro11805 r) {
    return r.valor + r.id;
}
