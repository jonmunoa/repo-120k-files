// fichero 40981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40981;

Registro40981 crear_registro40981(int id) {
    Registro40981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40981(Registro40981 r) {
    return r.valor + r.id;
}
