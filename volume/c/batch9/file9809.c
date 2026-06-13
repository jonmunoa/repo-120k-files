// fichero 9809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9809;

Registro9809 crear_registro9809(int id) {
    Registro9809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9809(Registro9809 r) {
    return r.valor + r.id;
}
