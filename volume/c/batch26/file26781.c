// fichero 26781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26781;

Registro26781 crear_registro26781(int id) {
    Registro26781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26781(Registro26781 r) {
    return r.valor + r.id;
}
