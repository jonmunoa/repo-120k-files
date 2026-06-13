// fichero 35565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35565;

Registro35565 crear_registro35565(int id) {
    Registro35565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35565(Registro35565 r) {
    return r.valor + r.id;
}
