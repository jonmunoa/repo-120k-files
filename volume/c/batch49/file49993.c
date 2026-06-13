// fichero 49993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49993;

Registro49993 crear_registro49993(int id) {
    Registro49993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49993(Registro49993 r) {
    return r.valor + r.id;
}
