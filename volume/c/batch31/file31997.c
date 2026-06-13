// fichero 31997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31997;

Registro31997 crear_registro31997(int id) {
    Registro31997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31997(Registro31997 r) {
    return r.valor + r.id;
}
