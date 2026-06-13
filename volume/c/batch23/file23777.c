// fichero 23777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23777;

Registro23777 crear_registro23777(int id) {
    Registro23777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23777(Registro23777 r) {
    return r.valor + r.id;
}
