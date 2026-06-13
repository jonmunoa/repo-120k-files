// fichero 9221 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9221;

Registro9221 crear_registro9221(int id) {
    Registro9221 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9221(Registro9221 r) {
    return r.valor + r.id;
}
