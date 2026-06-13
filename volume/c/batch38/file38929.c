// fichero 38929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38929;

Registro38929 crear_registro38929(int id) {
    Registro38929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38929(Registro38929 r) {
    return r.valor + r.id;
}
