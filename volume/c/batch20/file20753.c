// fichero 20753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20753;

Registro20753 crear_registro20753(int id) {
    Registro20753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20753(Registro20753 r) {
    return r.valor + r.id;
}
