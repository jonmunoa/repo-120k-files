// fichero 39873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39873;

Registro39873 crear_registro39873(int id) {
    Registro39873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39873(Registro39873 r) {
    return r.valor + r.id;
}
