// fichero 9581 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9581;

Registro9581 crear_registro9581(int id) {
    Registro9581 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9581(Registro9581 r) {
    return r.valor + r.id;
}
