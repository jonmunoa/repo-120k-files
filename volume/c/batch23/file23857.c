// fichero 23857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23857;

Registro23857 crear_registro23857(int id) {
    Registro23857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23857(Registro23857 r) {
    return r.valor + r.id;
}
