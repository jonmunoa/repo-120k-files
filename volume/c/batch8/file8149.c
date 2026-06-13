// fichero 8149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8149;

Registro8149 crear_registro8149(int id) {
    Registro8149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8149(Registro8149 r) {
    return r.valor + r.id;
}
