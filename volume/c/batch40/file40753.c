// fichero 40753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40753;

Registro40753 crear_registro40753(int id) {
    Registro40753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40753(Registro40753 r) {
    return r.valor + r.id;
}
