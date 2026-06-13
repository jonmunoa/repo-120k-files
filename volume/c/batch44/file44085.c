// fichero 44085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44085;

Registro44085 crear_registro44085(int id) {
    Registro44085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44085(Registro44085 r) {
    return r.valor + r.id;
}
