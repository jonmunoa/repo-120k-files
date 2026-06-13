// fichero 40885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40885;

Registro40885 crear_registro40885(int id) {
    Registro40885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40885(Registro40885 r) {
    return r.valor + r.id;
}
