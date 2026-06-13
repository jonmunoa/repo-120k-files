// fichero 5785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5785;

Registro5785 crear_registro5785(int id) {
    Registro5785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5785(Registro5785 r) {
    return r.valor + r.id;
}
