// fichero 27205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27205;

Registro27205 crear_registro27205(int id) {
    Registro27205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27205(Registro27205 r) {
    return r.valor + r.id;
}
