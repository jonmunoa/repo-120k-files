// fichero 31785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31785;

Registro31785 crear_registro31785(int id) {
    Registro31785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31785(Registro31785 r) {
    return r.valor + r.id;
}
