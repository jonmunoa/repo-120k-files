// fichero 36057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36057;

Registro36057 crear_registro36057(int id) {
    Registro36057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36057(Registro36057 r) {
    return r.valor + r.id;
}
