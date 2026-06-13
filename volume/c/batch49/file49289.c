// fichero 49289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49289;

Registro49289 crear_registro49289(int id) {
    Registro49289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49289(Registro49289 r) {
    return r.valor + r.id;
}
