// fichero 31425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31425;

Registro31425 crear_registro31425(int id) {
    Registro31425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31425(Registro31425 r) {
    return r.valor + r.id;
}
