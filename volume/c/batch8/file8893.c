// fichero 8893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8893;

Registro8893 crear_registro8893(int id) {
    Registro8893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8893(Registro8893 r) {
    return r.valor + r.id;
}
