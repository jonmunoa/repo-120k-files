// fichero 36957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36957;

Registro36957 crear_registro36957(int id) {
    Registro36957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36957(Registro36957 r) {
    return r.valor + r.id;
}
