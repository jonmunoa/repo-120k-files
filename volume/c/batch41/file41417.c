// fichero 41417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41417;

Registro41417 crear_registro41417(int id) {
    Registro41417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41417(Registro41417 r) {
    return r.valor + r.id;
}
