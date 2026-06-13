// fichero 5697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5697;

Registro5697 crear_registro5697(int id) {
    Registro5697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5697(Registro5697 r) {
    return r.valor + r.id;
}
