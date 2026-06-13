// fichero 7697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7697;

Registro7697 crear_registro7697(int id) {
    Registro7697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7697(Registro7697 r) {
    return r.valor + r.id;
}
