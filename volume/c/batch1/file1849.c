// fichero 1849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1849;

Registro1849 crear_registro1849(int id) {
    Registro1849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1849(Registro1849 r) {
    return r.valor + r.id;
}
