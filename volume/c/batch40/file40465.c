// fichero 40465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40465;

Registro40465 crear_registro40465(int id) {
    Registro40465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40465(Registro40465 r) {
    return r.valor + r.id;
}
