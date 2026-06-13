// fichero 26649 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26649;

Registro26649 crear_registro26649(int id) {
    Registro26649 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26649(Registro26649 r) {
    return r.valor + r.id;
}
