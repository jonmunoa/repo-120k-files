// fichero 38821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38821;

Registro38821 crear_registro38821(int id) {
    Registro38821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38821(Registro38821 r) {
    return r.valor + r.id;
}
