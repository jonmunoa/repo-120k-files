// fichero 53993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53993;

Registro53993 crear_registro53993(int id) {
    Registro53993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53993(Registro53993 r) {
    return r.valor + r.id;
}
