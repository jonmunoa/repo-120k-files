// fichero 19361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19361;

Registro19361 crear_registro19361(int id) {
    Registro19361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19361(Registro19361 r) {
    return r.valor + r.id;
}
