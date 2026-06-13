// fichero 38629 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38629;

Registro38629 crear_registro38629(int id) {
    Registro38629 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38629(Registro38629 r) {
    return r.valor + r.id;
}
