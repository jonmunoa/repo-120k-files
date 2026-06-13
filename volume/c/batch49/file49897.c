// fichero 49897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49897;

Registro49897 crear_registro49897(int id) {
    Registro49897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49897(Registro49897 r) {
    return r.valor + r.id;
}
