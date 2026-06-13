// fichero 38057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38057;

Registro38057 crear_registro38057(int id) {
    Registro38057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38057(Registro38057 r) {
    return r.valor + r.id;
}
