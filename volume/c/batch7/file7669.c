// fichero 7669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7669;

Registro7669 crear_registro7669(int id) {
    Registro7669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7669(Registro7669 r) {
    return r.valor + r.id;
}
