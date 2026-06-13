// fichero 23773 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23773;

Registro23773 crear_registro23773(int id) {
    Registro23773 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23773(Registro23773 r) {
    return r.valor + r.id;
}
