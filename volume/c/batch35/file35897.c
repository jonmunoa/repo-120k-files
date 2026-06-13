// fichero 35897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35897;

Registro35897 crear_registro35897(int id) {
    Registro35897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35897(Registro35897 r) {
    return r.valor + r.id;
}
