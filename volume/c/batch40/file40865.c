// fichero 40865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40865;

Registro40865 crear_registro40865(int id) {
    Registro40865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40865(Registro40865 r) {
    return r.valor + r.id;
}
