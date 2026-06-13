// fichero 22737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22737;

Registro22737 crear_registro22737(int id) {
    Registro22737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22737(Registro22737 r) {
    return r.valor + r.id;
}
