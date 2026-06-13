// fichero 3361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3361;

Registro3361 crear_registro3361(int id) {
    Registro3361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3361(Registro3361 r) {
    return r.valor + r.id;
}
