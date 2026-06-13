// fichero 36265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36265;

Registro36265 crear_registro36265(int id) {
    Registro36265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36265(Registro36265 r) {
    return r.valor + r.id;
}
