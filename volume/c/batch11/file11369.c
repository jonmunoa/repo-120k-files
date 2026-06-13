// fichero 11369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11369;

Registro11369 crear_registro11369(int id) {
    Registro11369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11369(Registro11369 r) {
    return r.valor + r.id;
}
