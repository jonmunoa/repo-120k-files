// fichero 44893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44893;

Registro44893 crear_registro44893(int id) {
    Registro44893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44893(Registro44893 r) {
    return r.valor + r.id;
}
