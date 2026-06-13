// fichero 40697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40697;

Registro40697 crear_registro40697(int id) {
    Registro40697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40697(Registro40697 r) {
    return r.valor + r.id;
}
