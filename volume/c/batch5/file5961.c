// fichero 5961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5961;

Registro5961 crear_registro5961(int id) {
    Registro5961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5961(Registro5961 r) {
    return r.valor + r.id;
}
