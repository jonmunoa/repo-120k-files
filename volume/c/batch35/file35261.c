// fichero 35261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35261;

Registro35261 crear_registro35261(int id) {
    Registro35261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35261(Registro35261 r) {
    return r.valor + r.id;
}
