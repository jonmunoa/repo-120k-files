// fichero 23673 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23673;

Registro23673 crear_registro23673(int id) {
    Registro23673 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23673(Registro23673 r) {
    return r.valor + r.id;
}
