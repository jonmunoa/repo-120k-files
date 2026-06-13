// fichero 40205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40205;

Registro40205 crear_registro40205(int id) {
    Registro40205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40205(Registro40205 r) {
    return r.valor + r.id;
}
