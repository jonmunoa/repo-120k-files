// fichero 35321 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35321;

Registro35321 crear_registro35321(int id) {
    Registro35321 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35321(Registro35321 r) {
    return r.valor + r.id;
}
