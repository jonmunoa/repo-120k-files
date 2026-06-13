// fichero 21673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21673;

Registro21673 crear_registro21673(int id) {
    Registro21673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21673(Registro21673 r) {
    return r.valor + r.id;
}
