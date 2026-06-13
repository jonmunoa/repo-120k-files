// fichero 2981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2981;

Registro2981 crear_registro2981(int id) {
    Registro2981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2981(Registro2981 r) {
    return r.valor + r.id;
}
