// fichero 27809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27809;

Registro27809 crear_registro27809(int id) {
    Registro27809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27809(Registro27809 r) {
    return r.valor + r.id;
}
