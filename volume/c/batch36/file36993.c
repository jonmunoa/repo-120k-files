// fichero 36993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36993;

Registro36993 crear_registro36993(int id) {
    Registro36993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36993(Registro36993 r) {
    return r.valor + r.id;
}
