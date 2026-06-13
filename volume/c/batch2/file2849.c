// fichero 2849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2849;

Registro2849 crear_registro2849(int id) {
    Registro2849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2849(Registro2849 r) {
    return r.valor + r.id;
}
