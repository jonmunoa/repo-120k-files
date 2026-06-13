// fichero 40085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40085;

Registro40085 crear_registro40085(int id) {
    Registro40085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40085(Registro40085 r) {
    return r.valor + r.id;
}
