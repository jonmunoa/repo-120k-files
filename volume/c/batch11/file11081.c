// fichero 11081 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11081;

Registro11081 crear_registro11081(int id) {
    Registro11081 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11081(Registro11081 r) {
    return r.valor + r.id;
}
