// fichero 2905 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2905;

Registro2905 crear_registro2905(int id) {
    Registro2905 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2905(Registro2905 r) {
    return r.valor + r.id;
}
