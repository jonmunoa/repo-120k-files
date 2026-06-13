// fichero 8649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8649;

Registro8649 crear_registro8649(int id) {
    Registro8649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8649(Registro8649 r) {
    return r.valor + r.id;
}
