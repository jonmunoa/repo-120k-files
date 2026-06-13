// fichero 32905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32905;

Registro32905 crear_registro32905(int id) {
    Registro32905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32905(Registro32905 r) {
    return r.valor + r.id;
}
