// fichero 40569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40569;

Registro40569 crear_registro40569(int id) {
    Registro40569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40569(Registro40569 r) {
    return r.valor + r.id;
}
