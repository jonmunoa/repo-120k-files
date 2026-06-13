// fichero 39737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39737;

Registro39737 crear_registro39737(int id) {
    Registro39737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39737(Registro39737 r) {
    return r.valor + r.id;
}
