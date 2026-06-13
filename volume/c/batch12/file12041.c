// fichero 12041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12041;

Registro12041 crear_registro12041(int id) {
    Registro12041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12041(Registro12041 r) {
    return r.valor + r.id;
}
