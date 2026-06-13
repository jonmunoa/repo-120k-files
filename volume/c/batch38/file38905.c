// fichero 38905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38905;

Registro38905 crear_registro38905(int id) {
    Registro38905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38905(Registro38905 r) {
    return r.valor + r.id;
}
