// fichero 40101 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40101;

Registro40101 crear_registro40101(int id) {
    Registro40101 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40101(Registro40101 r) {
    return r.valor + r.id;
}
