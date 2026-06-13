// fichero 50085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50085;

Registro50085 crear_registro50085(int id) {
    Registro50085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50085(Registro50085 r) {
    return r.valor + r.id;
}
