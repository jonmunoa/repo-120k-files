// fichero 26801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26801;

Registro26801 crear_registro26801(int id) {
    Registro26801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26801(Registro26801 r) {
    return r.valor + r.id;
}
