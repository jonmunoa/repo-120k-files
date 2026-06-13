// fichero 53437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53437;

Registro53437 crear_registro53437(int id) {
    Registro53437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53437(Registro53437 r) {
    return r.valor + r.id;
}
