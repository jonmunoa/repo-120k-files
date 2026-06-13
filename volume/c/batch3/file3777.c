// fichero 3777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3777;

Registro3777 crear_registro3777(int id) {
    Registro3777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3777(Registro3777 r) {
    return r.valor + r.id;
}
