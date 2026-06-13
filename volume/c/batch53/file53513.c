// fichero 53513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53513;

Registro53513 crear_registro53513(int id) {
    Registro53513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53513(Registro53513 r) {
    return r.valor + r.id;
}
