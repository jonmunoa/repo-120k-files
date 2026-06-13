// fichero 34001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34001;

Registro34001 crear_registro34001(int id) {
    Registro34001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34001(Registro34001 r) {
    return r.valor + r.id;
}
