// fichero 20929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20929;

Registro20929 crear_registro20929(int id) {
    Registro20929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20929(Registro20929 r) {
    return r.valor + r.id;
}
