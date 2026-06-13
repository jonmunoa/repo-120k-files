// fichero 781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro781;

Registro781 crear_registro781(int id) {
    Registro781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro781(Registro781 r) {
    return r.valor + r.id;
}
