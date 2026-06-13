// fichero 9529 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9529;

Registro9529 crear_registro9529(int id) {
    Registro9529 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9529(Registro9529 r) {
    return r.valor + r.id;
}
