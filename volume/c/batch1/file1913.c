// fichero 1913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1913;

Registro1913 crear_registro1913(int id) {
    Registro1913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1913(Registro1913 r) {
    return r.valor + r.id;
}
