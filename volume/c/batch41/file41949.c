// fichero 41949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41949;

Registro41949 crear_registro41949(int id) {
    Registro41949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41949(Registro41949 r) {
    return r.valor + r.id;
}
