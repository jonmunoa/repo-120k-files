// fichero 20001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20001;

Registro20001 crear_registro20001(int id) {
    Registro20001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20001(Registro20001 r) {
    return r.valor + r.id;
}
