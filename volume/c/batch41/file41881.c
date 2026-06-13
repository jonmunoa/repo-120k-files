// fichero 41881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41881;

Registro41881 crear_registro41881(int id) {
    Registro41881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41881(Registro41881 r) {
    return r.valor + r.id;
}
