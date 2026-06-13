// fichero 40049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40049;

Registro40049 crear_registro40049(int id) {
    Registro40049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40049(Registro40049 r) {
    return r.valor + r.id;
}
