// fichero 53753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53753;

Registro53753 crear_registro53753(int id) {
    Registro53753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53753(Registro53753 r) {
    return r.valor + r.id;
}
