// fichero 9569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9569;

Registro9569 crear_registro9569(int id) {
    Registro9569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9569(Registro9569 r) {
    return r.valor + r.id;
}
