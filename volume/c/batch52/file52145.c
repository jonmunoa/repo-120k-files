// fichero 52145 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52145;

Registro52145 crear_registro52145(int id) {
    Registro52145 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52145(Registro52145 r) {
    return r.valor + r.id;
}
