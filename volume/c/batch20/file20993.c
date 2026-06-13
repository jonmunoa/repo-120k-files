// fichero 20993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20993;

Registro20993 crear_registro20993(int id) {
    Registro20993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20993(Registro20993 r) {
    return r.valor + r.id;
}
