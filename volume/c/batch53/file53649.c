// fichero 53649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53649;

Registro53649 crear_registro53649(int id) {
    Registro53649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53649(Registro53649 r) {
    return r.valor + r.id;
}
