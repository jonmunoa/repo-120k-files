// fichero 18645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18645;

Registro18645 crear_registro18645(int id) {
    Registro18645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18645(Registro18645 r) {
    return r.valor + r.id;
}
