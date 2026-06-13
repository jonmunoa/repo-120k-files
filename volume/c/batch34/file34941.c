// fichero 34941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34941;

Registro34941 crear_registro34941(int id) {
    Registro34941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34941(Registro34941 r) {
    return r.valor + r.id;
}
