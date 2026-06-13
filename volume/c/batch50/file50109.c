// fichero 50109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50109;

Registro50109 crear_registro50109(int id) {
    Registro50109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50109(Registro50109 r) {
    return r.valor + r.id;
}
