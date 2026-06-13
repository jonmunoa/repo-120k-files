// fichero 38969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38969;

Registro38969 crear_registro38969(int id) {
    Registro38969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38969(Registro38969 r) {
    return r.valor + r.id;
}
