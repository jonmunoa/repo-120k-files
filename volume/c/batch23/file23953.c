// fichero 23953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23953;

Registro23953 crear_registro23953(int id) {
    Registro23953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23953(Registro23953 r) {
    return r.valor + r.id;
}
