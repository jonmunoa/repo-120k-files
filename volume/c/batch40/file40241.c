// fichero 40241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40241;

Registro40241 crear_registro40241(int id) {
    Registro40241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40241(Registro40241 r) {
    return r.valor + r.id;
}
