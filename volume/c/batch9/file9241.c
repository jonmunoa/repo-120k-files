// fichero 9241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9241;

Registro9241 crear_registro9241(int id) {
    Registro9241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9241(Registro9241 r) {
    return r.valor + r.id;
}
