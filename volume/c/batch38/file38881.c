// fichero 38881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38881;

Registro38881 crear_registro38881(int id) {
    Registro38881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38881(Registro38881 r) {
    return r.valor + r.id;
}
