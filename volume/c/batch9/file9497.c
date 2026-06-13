// fichero 9497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9497;

Registro9497 crear_registro9497(int id) {
    Registro9497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9497(Registro9497 r) {
    return r.valor + r.id;
}
