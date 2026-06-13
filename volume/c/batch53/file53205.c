// fichero 53205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53205;

Registro53205 crear_registro53205(int id) {
    Registro53205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53205(Registro53205 r) {
    return r.valor + r.id;
}
