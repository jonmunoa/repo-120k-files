// fichero 9301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9301;

Registro9301 crear_registro9301(int id) {
    Registro9301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9301(Registro9301 r) {
    return r.valor + r.id;
}
