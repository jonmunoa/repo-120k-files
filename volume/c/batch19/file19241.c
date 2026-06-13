// fichero 19241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19241;

Registro19241 crear_registro19241(int id) {
    Registro19241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19241(Registro19241 r) {
    return r.valor + r.id;
}
