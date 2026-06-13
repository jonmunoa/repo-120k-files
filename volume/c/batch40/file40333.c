// fichero 40333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40333;

Registro40333 crear_registro40333(int id) {
    Registro40333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40333(Registro40333 r) {
    return r.valor + r.id;
}
