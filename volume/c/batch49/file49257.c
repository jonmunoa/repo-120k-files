// fichero 49257 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49257;

Registro49257 crear_registro49257(int id) {
    Registro49257 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49257(Registro49257 r) {
    return r.valor + r.id;
}
