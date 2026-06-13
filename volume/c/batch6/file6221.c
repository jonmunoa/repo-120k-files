// fichero 6221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6221;

Registro6221 crear_registro6221(int id) {
    Registro6221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6221(Registro6221 r) {
    return r.valor + r.id;
}
