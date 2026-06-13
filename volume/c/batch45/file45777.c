// fichero 45777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro45777;

Registro45777 crear_registro45777(int id) {
    Registro45777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro45777(Registro45777 r) {
    return r.valor + r.id;
}
