// fichero 5161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5161;

Registro5161 crear_registro5161(int id) {
    Registro5161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5161(Registro5161 r) {
    return r.valor + r.id;
}
