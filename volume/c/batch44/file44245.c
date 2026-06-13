// fichero 44245 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44245;

Registro44245 crear_registro44245(int id) {
    Registro44245 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44245(Registro44245 r) {
    return r.valor + r.id;
}
