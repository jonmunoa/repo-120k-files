// fichero 44749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44749;

Registro44749 crear_registro44749(int id) {
    Registro44749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44749(Registro44749 r) {
    return r.valor + r.id;
}
