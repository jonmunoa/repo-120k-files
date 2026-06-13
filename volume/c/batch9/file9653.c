// fichero 9653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9653;

Registro9653 crear_registro9653(int id) {
    Registro9653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9653(Registro9653 r) {
    return r.valor + r.id;
}
