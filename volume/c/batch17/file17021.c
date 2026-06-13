// fichero 17021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17021;

Registro17021 crear_registro17021(int id) {
    Registro17021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17021(Registro17021 r) {
    return r.valor + r.id;
}
