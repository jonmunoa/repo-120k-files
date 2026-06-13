// fichero 24001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24001;

Registro24001 crear_registro24001(int id) {
    Registro24001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24001(Registro24001 r) {
    return r.valor + r.id;
}
