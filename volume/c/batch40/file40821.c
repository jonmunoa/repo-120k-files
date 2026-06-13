// fichero 40821 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40821;

Registro40821 crear_registro40821(int id) {
    Registro40821 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40821(Registro40821 r) {
    return r.valor + r.id;
}
