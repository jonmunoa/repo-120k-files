// fichero 28741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28741;

Registro28741 crear_registro28741(int id) {
    Registro28741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28741(Registro28741 r) {
    return r.valor + r.id;
}
