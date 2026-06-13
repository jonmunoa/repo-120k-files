// fichero 36445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36445;

Registro36445 crear_registro36445(int id) {
    Registro36445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36445(Registro36445 r) {
    return r.valor + r.id;
}
