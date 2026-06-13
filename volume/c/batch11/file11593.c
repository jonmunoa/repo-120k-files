// fichero 11593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11593;

Registro11593 crear_registro11593(int id) {
    Registro11593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11593(Registro11593 r) {
    return r.valor + r.id;
}
