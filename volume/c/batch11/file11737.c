// fichero 11737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11737;

Registro11737 crear_registro11737(int id) {
    Registro11737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11737(Registro11737 r) {
    return r.valor + r.id;
}
