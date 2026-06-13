// fichero 35949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35949;

Registro35949 crear_registro35949(int id) {
    Registro35949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35949(Registro35949 r) {
    return r.valor + r.id;
}
