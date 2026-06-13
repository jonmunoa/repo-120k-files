// fichero 38349 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38349;

Registro38349 crear_registro38349(int id) {
    Registro38349 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38349(Registro38349 r) {
    return r.valor + r.id;
}
