// fichero 10993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10993;

Registro10993 crear_registro10993(int id) {
    Registro10993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10993(Registro10993 r) {
    return r.valor + r.id;
}
