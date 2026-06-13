// fichero 16981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16981;

Registro16981 crear_registro16981(int id) {
    Registro16981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16981(Registro16981 r) {
    return r.valor + r.id;
}
