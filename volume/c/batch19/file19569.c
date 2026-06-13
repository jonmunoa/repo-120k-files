// fichero 19569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19569;

Registro19569 crear_registro19569(int id) {
    Registro19569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19569(Registro19569 r) {
    return r.valor + r.id;
}
