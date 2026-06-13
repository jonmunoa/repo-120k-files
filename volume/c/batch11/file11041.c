// fichero 11041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11041;

Registro11041 crear_registro11041(int id) {
    Registro11041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11041(Registro11041 r) {
    return r.valor + r.id;
}
