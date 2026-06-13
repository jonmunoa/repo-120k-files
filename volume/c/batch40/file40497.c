// fichero 40497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40497;

Registro40497 crear_registro40497(int id) {
    Registro40497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40497(Registro40497 r) {
    return r.valor + r.id;
}
