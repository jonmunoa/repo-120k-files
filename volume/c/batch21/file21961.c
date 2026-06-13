// fichero 21961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21961;

Registro21961 crear_registro21961(int id) {
    Registro21961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21961(Registro21961 r) {
    return r.valor + r.id;
}
