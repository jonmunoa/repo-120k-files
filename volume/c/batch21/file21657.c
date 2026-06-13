// fichero 21657 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21657;

Registro21657 crear_registro21657(int id) {
    Registro21657 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21657(Registro21657 r) {
    return r.valor + r.id;
}
