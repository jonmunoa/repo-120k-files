// fichero 47949 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47949;

Registro47949 crear_registro47949(int id) {
    Registro47949 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47949(Registro47949 r) {
    return r.valor + r.id;
}
