// fichero 19857 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19857;

Registro19857 crear_registro19857(int id) {
    Registro19857 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19857(Registro19857 r) {
    return r.valor + r.id;
}
