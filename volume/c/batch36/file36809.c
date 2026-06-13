// fichero 36809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36809;

Registro36809 crear_registro36809(int id) {
    Registro36809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36809(Registro36809 r) {
    return r.valor + r.id;
}
