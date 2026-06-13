// fichero 31945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31945;

Registro31945 crear_registro31945(int id) {
    Registro31945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31945(Registro31945 r) {
    return r.valor + r.id;
}
