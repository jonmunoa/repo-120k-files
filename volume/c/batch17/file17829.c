// fichero 17829 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17829;

Registro17829 crear_registro17829(int id) {
    Registro17829 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17829(Registro17829 r) {
    return r.valor + r.id;
}
