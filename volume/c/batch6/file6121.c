// fichero 6121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6121;

Registro6121 crear_registro6121(int id) {
    Registro6121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6121(Registro6121 r) {
    return r.valor + r.id;
}
