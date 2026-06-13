// fichero 23113 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23113;

Registro23113 crear_registro23113(int id) {
    Registro23113 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23113(Registro23113 r) {
    return r.valor + r.id;
}
