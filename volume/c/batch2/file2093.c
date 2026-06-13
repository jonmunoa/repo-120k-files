// fichero 2093 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2093;

Registro2093 crear_registro2093(int id) {
    Registro2093 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2093(Registro2093 r) {
    return r.valor + r.id;
}
