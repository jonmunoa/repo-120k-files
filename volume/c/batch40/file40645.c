// fichero 40645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40645;

Registro40645 crear_registro40645(int id) {
    Registro40645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40645(Registro40645 r) {
    return r.valor + r.id;
}
