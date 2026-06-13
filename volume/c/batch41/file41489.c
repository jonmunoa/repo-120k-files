// fichero 41489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41489;

Registro41489 crear_registro41489(int id) {
    Registro41489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41489(Registro41489 r) {
    return r.valor + r.id;
}
