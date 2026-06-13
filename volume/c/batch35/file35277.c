// fichero 35277 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35277;

Registro35277 crear_registro35277(int id) {
    Registro35277 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35277(Registro35277 r) {
    return r.valor + r.id;
}
