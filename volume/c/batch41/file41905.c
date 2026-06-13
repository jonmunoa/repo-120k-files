// fichero 41905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41905;

Registro41905 crear_registro41905(int id) {
    Registro41905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41905(Registro41905 r) {
    return r.valor + r.id;
}
