// fichero 14981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14981;

Registro14981 crear_registro14981(int id) {
    Registro14981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14981(Registro14981 r) {
    return r.valor + r.id;
}
