// fichero 36709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36709;

Registro36709 crear_registro36709(int id) {
    Registro36709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36709(Registro36709 r) {
    return r.valor + r.id;
}
