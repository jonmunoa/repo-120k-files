// fichero 18497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18497;

Registro18497 crear_registro18497(int id) {
    Registro18497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18497(Registro18497 r) {
    return r.valor + r.id;
}
