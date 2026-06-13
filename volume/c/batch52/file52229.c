// fichero 52229 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52229;

Registro52229 crear_registro52229(int id) {
    Registro52229 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52229(Registro52229 r) {
    return r.valor + r.id;
}
