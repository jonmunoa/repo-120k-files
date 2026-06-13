// fichero 47657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47657;

Registro47657 crear_registro47657(int id) {
    Registro47657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47657(Registro47657 r) {
    return r.valor + r.id;
}
