// fichero 2897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2897;

Registro2897 crear_registro2897(int id) {
    Registro2897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2897(Registro2897 r) {
    return r.valor + r.id;
}
