// fichero 53001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53001;

Registro53001 crear_registro53001(int id) {
    Registro53001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53001(Registro53001 r) {
    return r.valor + r.id;
}
