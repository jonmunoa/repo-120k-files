// fichero 50841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50841;

Registro50841 crear_registro50841(int id) {
    Registro50841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50841(Registro50841 r) {
    return r.valor + r.id;
}
