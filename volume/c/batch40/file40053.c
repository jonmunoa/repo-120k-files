// fichero 40053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40053;

Registro40053 crear_registro40053(int id) {
    Registro40053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40053(Registro40053 r) {
    return r.valor + r.id;
}
