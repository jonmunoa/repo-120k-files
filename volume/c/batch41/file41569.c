// fichero 41569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41569;

Registro41569 crear_registro41569(int id) {
    Registro41569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41569(Registro41569 r) {
    return r.valor + r.id;
}
