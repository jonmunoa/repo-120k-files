// fichero 19193 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19193;

Registro19193 crear_registro19193(int id) {
    Registro19193 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19193(Registro19193 r) {
    return r.valor + r.id;
}
