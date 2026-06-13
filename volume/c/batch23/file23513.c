// fichero 23513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23513;

Registro23513 crear_registro23513(int id) {
    Registro23513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23513(Registro23513 r) {
    return r.valor + r.id;
}
