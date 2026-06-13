// fichero 17169 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17169;

Registro17169 crear_registro17169(int id) {
    Registro17169 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17169(Registro17169 r) {
    return r.valor + r.id;
}
