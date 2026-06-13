// fichero 40093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40093;

Registro40093 crear_registro40093(int id) {
    Registro40093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40093(Registro40093 r) {
    return r.valor + r.id;
}
