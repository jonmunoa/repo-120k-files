// fichero 26777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26777;

Registro26777 crear_registro26777(int id) {
    Registro26777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26777(Registro26777 r) {
    return r.valor + r.id;
}
