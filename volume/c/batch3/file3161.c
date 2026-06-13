// fichero 3161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3161;

Registro3161 crear_registro3161(int id) {
    Registro3161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3161(Registro3161 r) {
    return r.valor + r.id;
}
