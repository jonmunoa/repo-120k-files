// fichero 2149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2149;

Registro2149 crear_registro2149(int id) {
    Registro2149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2149(Registro2149 r) {
    return r.valor + r.id;
}
