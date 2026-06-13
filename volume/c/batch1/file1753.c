// fichero 1753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1753;

Registro1753 crear_registro1753(int id) {
    Registro1753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1753(Registro1753 r) {
    return r.valor + r.id;
}
