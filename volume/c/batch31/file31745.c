// fichero 31745 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31745;

Registro31745 crear_registro31745(int id) {
    Registro31745 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31745(Registro31745 r) {
    return r.valor + r.id;
}
