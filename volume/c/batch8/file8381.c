// fichero 8381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8381;

Registro8381 crear_registro8381(int id) {
    Registro8381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8381(Registro8381 r) {
    return r.valor + r.id;
}
