// fichero 28993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28993;

Registro28993 crear_registro28993(int id) {
    Registro28993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28993(Registro28993 r) {
    return r.valor + r.id;
}
