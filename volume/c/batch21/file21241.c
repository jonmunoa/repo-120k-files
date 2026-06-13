// fichero 21241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21241;

Registro21241 crear_registro21241(int id) {
    Registro21241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21241(Registro21241 r) {
    return r.valor + r.id;
}
