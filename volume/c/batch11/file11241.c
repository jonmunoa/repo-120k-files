// fichero 11241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11241;

Registro11241 crear_registro11241(int id) {
    Registro11241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11241(Registro11241 r) {
    return r.valor + r.id;
}
