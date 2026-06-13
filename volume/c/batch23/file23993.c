// fichero 23993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23993;

Registro23993 crear_registro23993(int id) {
    Registro23993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23993(Registro23993 r) {
    return r.valor + r.id;
}
