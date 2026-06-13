// fichero 26869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26869;

Registro26869 crear_registro26869(int id) {
    Registro26869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26869(Registro26869 r) {
    return r.valor + r.id;
}
