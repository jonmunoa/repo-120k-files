// fichero 44917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44917;

Registro44917 crear_registro44917(int id) {
    Registro44917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44917(Registro44917 r) {
    return r.valor + r.id;
}
