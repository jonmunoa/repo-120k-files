// fichero 35505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35505;

Registro35505 crear_registro35505(int id) {
    Registro35505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35505(Registro35505 r) {
    return r.valor + r.id;
}
