// fichero 28873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28873;

Registro28873 crear_registro28873(int id) {
    Registro28873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28873(Registro28873 r) {
    return r.valor + r.id;
}
