// fichero 32753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32753;

Registro32753 crear_registro32753(int id) {
    Registro32753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32753(Registro32753 r) {
    return r.valor + r.id;
}
