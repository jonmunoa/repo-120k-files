// fichero 23353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23353;

Registro23353 crear_registro23353(int id) {
    Registro23353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23353(Registro23353 r) {
    return r.valor + r.id;
}
