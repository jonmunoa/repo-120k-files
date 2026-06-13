// fichero 34205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34205;

Registro34205 crear_registro34205(int id) {
    Registro34205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34205(Registro34205 r) {
    return r.valor + r.id;
}
