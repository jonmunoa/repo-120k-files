// fichero 38849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38849;

Registro38849 crear_registro38849(int id) {
    Registro38849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38849(Registro38849 r) {
    return r.valor + r.id;
}
