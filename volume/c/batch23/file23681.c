// fichero 23681 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23681;

Registro23681 crear_registro23681(int id) {
    Registro23681 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23681(Registro23681 r) {
    return r.valor + r.id;
}
