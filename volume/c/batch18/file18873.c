// fichero 18873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18873;

Registro18873 crear_registro18873(int id) {
    Registro18873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18873(Registro18873 r) {
    return r.valor + r.id;
}
