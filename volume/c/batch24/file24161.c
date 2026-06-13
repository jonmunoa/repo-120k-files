// fichero 24161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24161;

Registro24161 crear_registro24161(int id) {
    Registro24161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24161(Registro24161 r) {
    return r.valor + r.id;
}
