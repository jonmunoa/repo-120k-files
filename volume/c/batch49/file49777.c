// fichero 49777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49777;

Registro49777 crear_registro49777(int id) {
    Registro49777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49777(Registro49777 r) {
    return r.valor + r.id;
}
