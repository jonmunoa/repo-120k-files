// fichero 20693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20693;

Registro20693 crear_registro20693(int id) {
    Registro20693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20693(Registro20693 r) {
    return r.valor + r.id;
}
