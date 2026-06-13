// fichero 36869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36869;

Registro36869 crear_registro36869(int id) {
    Registro36869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36869(Registro36869 r) {
    return r.valor + r.id;
}
