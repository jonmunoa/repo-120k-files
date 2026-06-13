// fichero 40209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40209;

Registro40209 crear_registro40209(int id) {
    Registro40209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40209(Registro40209 r) {
    return r.valor + r.id;
}
