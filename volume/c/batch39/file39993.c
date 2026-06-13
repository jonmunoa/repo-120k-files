// fichero 39993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39993;

Registro39993 crear_registro39993(int id) {
    Registro39993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39993(Registro39993 r) {
    return r.valor + r.id;
}
