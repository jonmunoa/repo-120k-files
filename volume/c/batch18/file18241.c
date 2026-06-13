// fichero 18241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18241;

Registro18241 crear_registro18241(int id) {
    Registro18241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18241(Registro18241 r) {
    return r.valor + r.id;
}
