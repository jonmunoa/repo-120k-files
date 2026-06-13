// fichero 41921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41921;

Registro41921 crear_registro41921(int id) {
    Registro41921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41921(Registro41921 r) {
    return r.valor + r.id;
}
