// fichero 50873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50873;

Registro50873 crear_registro50873(int id) {
    Registro50873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50873(Registro50873 r) {
    return r.valor + r.id;
}
