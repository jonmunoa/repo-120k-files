// fichero 18933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18933;

Registro18933 crear_registro18933(int id) {
    Registro18933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18933(Registro18933 r) {
    return r.valor + r.id;
}
