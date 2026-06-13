// fichero 43777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro43777;

Registro43777 crear_registro43777(int id) {
    Registro43777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro43777(Registro43777 r) {
    return r.valor + r.id;
}
