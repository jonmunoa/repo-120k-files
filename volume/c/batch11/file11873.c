// fichero 11873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11873;

Registro11873 crear_registro11873(int id) {
    Registro11873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11873(Registro11873 r) {
    return r.valor + r.id;
}
