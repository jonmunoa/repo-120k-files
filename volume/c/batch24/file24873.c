// fichero 24873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24873;

Registro24873 crear_registro24873(int id) {
    Registro24873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24873(Registro24873 r) {
    return r.valor + r.id;
}
