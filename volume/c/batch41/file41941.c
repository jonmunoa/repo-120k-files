// fichero 41941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41941;

Registro41941 crear_registro41941(int id) {
    Registro41941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41941(Registro41941 r) {
    return r.valor + r.id;
}
