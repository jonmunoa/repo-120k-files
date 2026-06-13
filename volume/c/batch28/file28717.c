// fichero 28717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28717;

Registro28717 crear_registro28717(int id) {
    Registro28717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28717(Registro28717 r) {
    return r.valor + r.id;
}
