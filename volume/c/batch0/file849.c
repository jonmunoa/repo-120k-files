// fichero 849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro849;

Registro849 crear_registro849(int id) {
    Registro849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro849(Registro849 r) {
    return r.valor + r.id;
}
