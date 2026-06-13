// fichero 16993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16993;

Registro16993 crear_registro16993(int id) {
    Registro16993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16993(Registro16993 r) {
    return r.valor + r.id;
}
