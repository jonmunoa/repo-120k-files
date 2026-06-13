// fichero 9249 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9249;

Registro9249 crear_registro9249(int id) {
    Registro9249 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9249(Registro9249 r) {
    return r.valor + r.id;
}
