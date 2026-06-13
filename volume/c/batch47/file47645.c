// fichero 47645 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47645;

Registro47645 crear_registro47645(int id) {
    Registro47645 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47645(Registro47645 r) {
    return r.valor + r.id;
}
