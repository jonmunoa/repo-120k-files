// fichero 20369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20369;

Registro20369 crear_registro20369(int id) {
    Registro20369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20369(Registro20369 r) {
    return r.valor + r.id;
}
