// fichero 24169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24169;

Registro24169 crear_registro24169(int id) {
    Registro24169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24169(Registro24169 r) {
    return r.valor + r.id;
}
