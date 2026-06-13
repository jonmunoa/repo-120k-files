// fichero 53873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53873;

Registro53873 crear_registro53873(int id) {
    Registro53873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53873(Registro53873 r) {
    return r.valor + r.id;
}
