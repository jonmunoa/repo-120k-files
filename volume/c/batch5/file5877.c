// fichero 5877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5877;

Registro5877 crear_registro5877(int id) {
    Registro5877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5877(Registro5877 r) {
    return r.valor + r.id;
}
