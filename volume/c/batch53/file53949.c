// fichero 53949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53949;

Registro53949 crear_registro53949(int id) {
    Registro53949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53949(Registro53949 r) {
    return r.valor + r.id;
}
