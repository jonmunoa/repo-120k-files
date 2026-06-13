// fichero 50981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50981;

Registro50981 crear_registro50981(int id) {
    Registro50981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50981(Registro50981 r) {
    return r.valor + r.id;
}
