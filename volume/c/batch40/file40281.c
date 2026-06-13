// fichero 40281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40281;

Registro40281 crear_registro40281(int id) {
    Registro40281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40281(Registro40281 r) {
    return r.valor + r.id;
}
