// fichero 21993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21993;

Registro21993 crear_registro21993(int id) {
    Registro21993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21993(Registro21993 r) {
    return r.valor + r.id;
}
