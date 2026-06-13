// fichero 23697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23697;

Registro23697 crear_registro23697(int id) {
    Registro23697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23697(Registro23697 r) {
    return r.valor + r.id;
}
