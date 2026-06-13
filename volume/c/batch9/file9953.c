// fichero 9953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9953;

Registro9953 crear_registro9953(int id) {
    Registro9953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9953(Registro9953 r) {
    return r.valor + r.id;
}
