// fichero 11777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11777;

Registro11777 crear_registro11777(int id) {
    Registro11777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11777(Registro11777 r) {
    return r.valor + r.id;
}
