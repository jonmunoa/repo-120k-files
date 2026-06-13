// fichero 21513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21513;

Registro21513 crear_registro21513(int id) {
    Registro21513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21513(Registro21513 r) {
    return r.valor + r.id;
}
