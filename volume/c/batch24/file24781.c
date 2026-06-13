// fichero 24781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24781;

Registro24781 crear_registro24781(int id) {
    Registro24781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24781(Registro24781 r) {
    return r.valor + r.id;
}
