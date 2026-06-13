// fichero 18765 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18765;

Registro18765 crear_registro18765(int id) {
    Registro18765 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18765(Registro18765 r) {
    return r.valor + r.id;
}
