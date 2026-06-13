// fichero 8345 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8345;

Registro8345 crear_registro8345(int id) {
    Registro8345 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8345(Registro8345 r) {
    return r.valor + r.id;
}
