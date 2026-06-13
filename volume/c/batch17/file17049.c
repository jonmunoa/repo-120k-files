// fichero 17049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17049;

Registro17049 crear_registro17049(int id) {
    Registro17049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17049(Registro17049 r) {
    return r.valor + r.id;
}
