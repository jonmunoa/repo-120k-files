// fichero 40301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40301;

Registro40301 crear_registro40301(int id) {
    Registro40301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40301(Registro40301 r) {
    return r.valor + r.id;
}
