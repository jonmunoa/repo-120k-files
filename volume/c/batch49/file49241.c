// fichero 49241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49241;

Registro49241 crear_registro49241(int id) {
    Registro49241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49241(Registro49241 r) {
    return r.valor + r.id;
}
