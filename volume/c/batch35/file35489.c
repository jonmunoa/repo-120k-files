// fichero 35489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35489;

Registro35489 crear_registro35489(int id) {
    Registro35489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35489(Registro35489 r) {
    return r.valor + r.id;
}
