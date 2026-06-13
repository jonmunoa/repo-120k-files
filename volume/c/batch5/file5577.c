// fichero 5577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5577;

Registro5577 crear_registro5577(int id) {
    Registro5577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5577(Registro5577 r) {
    return r.valor + r.id;
}
