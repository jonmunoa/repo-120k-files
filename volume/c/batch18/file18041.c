// fichero 18041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18041;

Registro18041 crear_registro18041(int id) {
    Registro18041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18041(Registro18041 r) {
    return r.valor + r.id;
}
