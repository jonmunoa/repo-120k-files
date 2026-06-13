// fichero 36277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36277;

Registro36277 crear_registro36277(int id) {
    Registro36277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36277(Registro36277 r) {
    return r.valor + r.id;
}
