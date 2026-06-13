// fichero 29697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29697;

Registro29697 crear_registro29697(int id) {
    Registro29697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29697(Registro29697 r) {
    return r.valor + r.id;
}
