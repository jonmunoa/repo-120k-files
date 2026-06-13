// fichero 49741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49741;

Registro49741 crear_registro49741(int id) {
    Registro49741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49741(Registro49741 r) {
    return r.valor + r.id;
}
