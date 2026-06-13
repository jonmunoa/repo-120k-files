// fichero 19369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19369;

Registro19369 crear_registro19369(int id) {
    Registro19369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19369(Registro19369 r) {
    return r.valor + r.id;
}
