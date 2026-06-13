// fichero 44841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44841;

Registro44841 crear_registro44841(int id) {
    Registro44841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44841(Registro44841 r) {
    return r.valor + r.id;
}
