// fichero 2781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2781;

Registro2781 crear_registro2781(int id) {
    Registro2781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2781(Registro2781 r) {
    return r.valor + r.id;
}
