// fichero 24893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24893;

Registro24893 crear_registro24893(int id) {
    Registro24893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24893(Registro24893 r) {
    return r.valor + r.id;
}
