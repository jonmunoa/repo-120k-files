// fichero 27609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27609;

Registro27609 crear_registro27609(int id) {
    Registro27609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27609(Registro27609 r) {
    return r.valor + r.id;
}
