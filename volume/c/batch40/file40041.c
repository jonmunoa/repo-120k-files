// fichero 40041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40041;

Registro40041 crear_registro40041(int id) {
    Registro40041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40041(Registro40041 r) {
    return r.valor + r.id;
}
