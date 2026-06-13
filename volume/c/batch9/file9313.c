// fichero 9313 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9313;

Registro9313 crear_registro9313(int id) {
    Registro9313 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9313(Registro9313 r) {
    return r.valor + r.id;
}
