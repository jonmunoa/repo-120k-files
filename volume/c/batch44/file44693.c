// fichero 44693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44693;

Registro44693 crear_registro44693(int id) {
    Registro44693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44693(Registro44693 r) {
    return r.valor + r.id;
}
