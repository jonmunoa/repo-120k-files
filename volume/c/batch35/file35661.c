// fichero 35661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35661;

Registro35661 crear_registro35661(int id) {
    Registro35661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35661(Registro35661 r) {
    return r.valor + r.id;
}
