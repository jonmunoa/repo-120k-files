// fichero 31041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31041;

Registro31041 crear_registro31041(int id) {
    Registro31041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31041(Registro31041 r) {
    return r.valor + r.id;
}
