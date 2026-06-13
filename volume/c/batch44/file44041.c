// fichero 44041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44041;

Registro44041 crear_registro44041(int id) {
    Registro44041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44041(Registro44041 r) {
    return r.valor + r.id;
}
