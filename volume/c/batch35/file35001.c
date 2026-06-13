// fichero 35001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35001;

Registro35001 crear_registro35001(int id) {
    Registro35001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35001(Registro35001 r) {
    return r.valor + r.id;
}
