// fichero 23465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23465;

Registro23465 crear_registro23465(int id) {
    Registro23465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23465(Registro23465 r) {
    return r.valor + r.id;
}
