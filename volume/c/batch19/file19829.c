// fichero 19829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19829;

Registro19829 crear_registro19829(int id) {
    Registro19829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19829(Registro19829 r) {
    return r.valor + r.id;
}
