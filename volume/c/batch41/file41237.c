// fichero 41237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41237;

Registro41237 crear_registro41237(int id) {
    Registro41237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41237(Registro41237 r) {
    return r.valor + r.id;
}
