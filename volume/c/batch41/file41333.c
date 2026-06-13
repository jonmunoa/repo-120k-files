// fichero 41333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41333;

Registro41333 crear_registro41333(int id) {
    Registro41333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41333(Registro41333 r) {
    return r.valor + r.id;
}
