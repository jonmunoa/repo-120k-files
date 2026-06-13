// fichero 21785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21785;

Registro21785 crear_registro21785(int id) {
    Registro21785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21785(Registro21785 r) {
    return r.valor + r.id;
}
