// fichero 35257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35257;

Registro35257 crear_registro35257(int id) {
    Registro35257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35257(Registro35257 r) {
    return r.valor + r.id;
}
