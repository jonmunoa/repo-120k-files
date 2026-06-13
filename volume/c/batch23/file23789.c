// fichero 23789 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23789;

Registro23789 crear_registro23789(int id) {
    Registro23789 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23789(Registro23789 r) {
    return r.valor + r.id;
}
