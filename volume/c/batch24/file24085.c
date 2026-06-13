// fichero 24085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24085;

Registro24085 crear_registro24085(int id) {
    Registro24085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24085(Registro24085 r) {
    return r.valor + r.id;
}
