// fichero 28313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28313;

Registro28313 crear_registro28313(int id) {
    Registro28313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28313(Registro28313 r) {
    return r.valor + r.id;
}
