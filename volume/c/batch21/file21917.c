// fichero 21917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21917;

Registro21917 crear_registro21917(int id) {
    Registro21917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21917(Registro21917 r) {
    return r.valor + r.id;
}
