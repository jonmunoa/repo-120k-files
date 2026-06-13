// fichero 52041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52041;

Registro52041 crear_registro52041(int id) {
    Registro52041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52041(Registro52041 r) {
    return r.valor + r.id;
}
