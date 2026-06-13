// fichero 16753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro16753;

Registro16753 crear_registro16753(int id) {
    Registro16753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro16753(Registro16753 r) {
    return r.valor + r.id;
}
