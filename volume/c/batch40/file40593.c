// fichero 40593 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40593;

Registro40593 crear_registro40593(int id) {
    Registro40593 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40593(Registro40593 r) {
    return r.valor + r.id;
}
