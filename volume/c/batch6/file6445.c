// fichero 6445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6445;

Registro6445 crear_registro6445(int id) {
    Registro6445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6445(Registro6445 r) {
    return r.valor + r.id;
}
