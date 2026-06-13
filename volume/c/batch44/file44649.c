// fichero 44649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44649;

Registro44649 crear_registro44649(int id) {
    Registro44649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44649(Registro44649 r) {
    return r.valor + r.id;
}
