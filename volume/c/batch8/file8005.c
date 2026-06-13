// fichero 8005 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8005;

Registro8005 crear_registro8005(int id) {
    Registro8005 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8005(Registro8005 r) {
    return r.valor + r.id;
}
