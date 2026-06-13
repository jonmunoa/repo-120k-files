// fichero 18021 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18021;

Registro18021 crear_registro18021(int id) {
    Registro18021 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18021(Registro18021 r) {
    return r.valor + r.id;
}
