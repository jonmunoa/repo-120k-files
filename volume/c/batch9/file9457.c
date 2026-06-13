// fichero 9457 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9457;

Registro9457 crear_registro9457(int id) {
    Registro9457 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9457(Registro9457 r) {
    return r.valor + r.id;
}
