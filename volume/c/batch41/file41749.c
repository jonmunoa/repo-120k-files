// fichero 41749 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41749;

Registro41749 crear_registro41749(int id) {
    Registro41749 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41749(Registro41749 r) {
    return r.valor + r.id;
}
