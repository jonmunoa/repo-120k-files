// fichero 36865 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36865;

Registro36865 crear_registro36865(int id) {
    Registro36865 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36865(Registro36865 r) {
    return r.valor + r.id;
}
