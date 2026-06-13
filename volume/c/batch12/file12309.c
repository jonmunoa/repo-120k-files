// fichero 12309 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12309;

Registro12309 crear_registro12309(int id) {
    Registro12309 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12309(Registro12309 r) {
    return r.valor + r.id;
}
