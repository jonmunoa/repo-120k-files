// fichero 12301 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12301;

Registro12301 crear_registro12301(int id) {
    Registro12301 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12301(Registro12301 r) {
    return r.valor + r.id;
}
