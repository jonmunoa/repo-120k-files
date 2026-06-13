// fichero 21849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21849;

Registro21849 crear_registro21849(int id) {
    Registro21849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21849(Registro21849 r) {
    return r.valor + r.id;
}
