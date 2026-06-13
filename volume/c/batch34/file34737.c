// fichero 34737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34737;

Registro34737 crear_registro34737(int id) {
    Registro34737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34737(Registro34737 r) {
    return r.valor + r.id;
}
