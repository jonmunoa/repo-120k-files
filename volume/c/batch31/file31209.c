// fichero 31209 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31209;

Registro31209 crear_registro31209(int id) {
    Registro31209 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31209(Registro31209 r) {
    return r.valor + r.id;
}
