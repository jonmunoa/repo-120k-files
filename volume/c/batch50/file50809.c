// fichero 50809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50809;

Registro50809 crear_registro50809(int id) {
    Registro50809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50809(Registro50809 r) {
    return r.valor + r.id;
}
