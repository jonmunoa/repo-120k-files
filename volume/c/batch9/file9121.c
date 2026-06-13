// fichero 9121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9121;

Registro9121 crear_registro9121(int id) {
    Registro9121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9121(Registro9121 r) {
    return r.valor + r.id;
}
