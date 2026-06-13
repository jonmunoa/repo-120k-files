// fichero 41149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41149;

Registro41149 crear_registro41149(int id) {
    Registro41149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41149(Registro41149 r) {
    return r.valor + r.id;
}
