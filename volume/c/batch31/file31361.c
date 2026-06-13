// fichero 31361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31361;

Registro31361 crear_registro31361(int id) {
    Registro31361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31361(Registro31361 r) {
    return r.valor + r.id;
}
