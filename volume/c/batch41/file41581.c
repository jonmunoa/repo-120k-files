// fichero 41581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41581;

Registro41581 crear_registro41581(int id) {
    Registro41581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41581(Registro41581 r) {
    return r.valor + r.id;
}
