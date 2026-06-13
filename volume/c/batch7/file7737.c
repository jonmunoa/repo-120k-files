// fichero 7737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7737;

Registro7737 crear_registro7737(int id) {
    Registro7737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7737(Registro7737 r) {
    return r.valor + r.id;
}
