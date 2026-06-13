// fichero 35237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35237;

Registro35237 crear_registro35237(int id) {
    Registro35237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35237(Registro35237 r) {
    return r.valor + r.id;
}
