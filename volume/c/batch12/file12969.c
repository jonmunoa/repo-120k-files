// fichero 12969 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12969;

Registro12969 crear_registro12969(int id) {
    Registro12969 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12969(Registro12969 r) {
    return r.valor + r.id;
}
