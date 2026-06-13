// fichero 50697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50697;

Registro50697 crear_registro50697(int id) {
    Registro50697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50697(Registro50697 r) {
    return r.valor + r.id;
}
