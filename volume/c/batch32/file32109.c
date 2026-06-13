// fichero 32109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32109;

Registro32109 crear_registro32109(int id) {
    Registro32109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32109(Registro32109 r) {
    return r.valor + r.id;
}
