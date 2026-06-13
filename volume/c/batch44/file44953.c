// fichero 44953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44953;

Registro44953 crear_registro44953(int id) {
    Registro44953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44953(Registro44953 r) {
    return r.valor + r.id;
}
