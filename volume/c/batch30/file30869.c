// fichero 30869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30869;

Registro30869 crear_registro30869(int id) {
    Registro30869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30869(Registro30869 r) {
    return r.valor + r.id;
}
