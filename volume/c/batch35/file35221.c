// fichero 35221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35221;

Registro35221 crear_registro35221(int id) {
    Registro35221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35221(Registro35221 r) {
    return r.valor + r.id;
}
