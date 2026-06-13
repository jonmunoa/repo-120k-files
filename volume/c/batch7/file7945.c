// fichero 7945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7945;

Registro7945 crear_registro7945(int id) {
    Registro7945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7945(Registro7945 r) {
    return r.valor + r.id;
}
