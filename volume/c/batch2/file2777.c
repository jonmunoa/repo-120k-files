// fichero 2777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2777;

Registro2777 crear_registro2777(int id) {
    Registro2777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2777(Registro2777 r) {
    return r.valor + r.id;
}
