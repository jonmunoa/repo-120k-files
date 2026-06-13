// fichero 21753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21753;

Registro21753 crear_registro21753(int id) {
    Registro21753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21753(Registro21753 r) {
    return r.valor + r.id;
}
