// fichero 35285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35285;

Registro35285 crear_registro35285(int id) {
    Registro35285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35285(Registro35285 r) {
    return r.valor + r.id;
}
