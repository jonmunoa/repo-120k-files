// fichero 9061 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9061;

Registro9061 crear_registro9061(int id) {
    Registro9061 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9061(Registro9061 r) {
    return r.valor + r.id;
}
