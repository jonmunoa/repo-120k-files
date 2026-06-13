// fichero 41109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41109;

Registro41109 crear_registro41109(int id) {
    Registro41109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41109(Registro41109 r) {
    return r.valor + r.id;
}
