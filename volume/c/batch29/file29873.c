// fichero 29873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29873;

Registro29873 crear_registro29873(int id) {
    Registro29873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29873(Registro29873 r) {
    return r.valor + r.id;
}
