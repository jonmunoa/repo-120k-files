// fichero 35473 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35473;

Registro35473 crear_registro35473(int id) {
    Registro35473 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35473(Registro35473 r) {
    return r.valor + r.id;
}
