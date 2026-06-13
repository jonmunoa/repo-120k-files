// fichero 52661 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52661;

Registro52661 crear_registro52661(int id) {
    Registro52661 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52661(Registro52661 r) {
    return r.valor + r.id;
}
