// fichero 34993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34993;

Registro34993 crear_registro34993(int id) {
    Registro34993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34993(Registro34993 r) {
    return r.valor + r.id;
}
