// fichero 41853 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41853;

Registro41853 crear_registro41853(int id) {
    Registro41853 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41853(Registro41853 r) {
    return r.valor + r.id;
}
