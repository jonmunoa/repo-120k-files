// fichero 34849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34849;

Registro34849 crear_registro34849(int id) {
    Registro34849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34849(Registro34849 r) {
    return r.valor + r.id;
}
