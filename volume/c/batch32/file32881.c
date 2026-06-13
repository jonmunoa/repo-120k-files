// fichero 32881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32881;

Registro32881 crear_registro32881(int id) {
    Registro32881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32881(Registro32881 r) {
    return r.valor + r.id;
}
