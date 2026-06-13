// fichero 12089 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12089;

Registro12089 crear_registro12089(int id) {
    Registro12089 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12089(Registro12089 r) {
    return r.valor + r.id;
}
