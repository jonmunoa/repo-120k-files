// fichero 3669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3669;

Registro3669 crear_registro3669(int id) {
    Registro3669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3669(Registro3669 r) {
    return r.valor + r.id;
}
