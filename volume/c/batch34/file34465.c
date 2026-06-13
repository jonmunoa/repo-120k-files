// fichero 34465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34465;

Registro34465 crear_registro34465(int id) {
    Registro34465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34465(Registro34465 r) {
    return r.valor + r.id;
}
