// fichero 36073 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36073;

Registro36073 crear_registro36073(int id) {
    Registro36073 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36073(Registro36073 r) {
    return r.valor + r.id;
}
