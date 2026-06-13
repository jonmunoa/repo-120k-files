// fichero 12361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12361;

Registro12361 crear_registro12361(int id) {
    Registro12361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12361(Registro12361 r) {
    return r.valor + r.id;
}
