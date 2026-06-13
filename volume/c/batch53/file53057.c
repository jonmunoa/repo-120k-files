// fichero 53057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53057;

Registro53057 crear_registro53057(int id) {
    Registro53057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53057(Registro53057 r) {
    return r.valor + r.id;
}
