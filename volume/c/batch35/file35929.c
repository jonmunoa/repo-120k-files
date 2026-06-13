// fichero 35929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35929;

Registro35929 crear_registro35929(int id) {
    Registro35929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35929(Registro35929 r) {
    return r.valor + r.id;
}
