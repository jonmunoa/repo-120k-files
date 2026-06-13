// fichero 38445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38445;

Registro38445 crear_registro38445(int id) {
    Registro38445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38445(Registro38445 r) {
    return r.valor + r.id;
}
