// fichero 12285 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12285;

Registro12285 crear_registro12285(int id) {
    Registro12285 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12285(Registro12285 r) {
    return r.valor + r.id;
}
