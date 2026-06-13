// fichero 34521 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34521;

Registro34521 crear_registro34521(int id) {
    Registro34521 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34521(Registro34521 r) {
    return r.valor + r.id;
}
