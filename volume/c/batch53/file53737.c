// fichero 53737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53737;

Registro53737 crear_registro53737(int id) {
    Registro53737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53737(Registro53737 r) {
    return r.valor + r.id;
}
