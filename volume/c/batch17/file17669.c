// fichero 17669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17669;

Registro17669 crear_registro17669(int id) {
    Registro17669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17669(Registro17669 r) {
    return r.valor + r.id;
}
