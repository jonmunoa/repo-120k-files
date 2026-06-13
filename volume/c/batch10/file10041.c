// fichero 10041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10041;

Registro10041 crear_registro10041(int id) {
    Registro10041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10041(Registro10041 r) {
    return r.valor + r.id;
}
