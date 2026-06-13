// fichero 27785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27785;

Registro27785 crear_registro27785(int id) {
    Registro27785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27785(Registro27785 r) {
    return r.valor + r.id;
}
