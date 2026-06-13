// fichero 50657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50657;

Registro50657 crear_registro50657(int id) {
    Registro50657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50657(Registro50657 r) {
    return r.valor + r.id;
}
