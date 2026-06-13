// fichero 36565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36565;

Registro36565 crear_registro36565(int id) {
    Registro36565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36565(Registro36565 r) {
    return r.valor + r.id;
}
