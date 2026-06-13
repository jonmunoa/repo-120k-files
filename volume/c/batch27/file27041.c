// fichero 27041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27041;

Registro27041 crear_registro27041(int id) {
    Registro27041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27041(Registro27041 r) {
    return r.valor + r.id;
}
