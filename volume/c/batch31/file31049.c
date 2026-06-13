// fichero 31049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31049;

Registro31049 crear_registro31049(int id) {
    Registro31049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31049(Registro31049 r) {
    return r.valor + r.id;
}
