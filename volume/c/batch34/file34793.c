// fichero 34793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34793;

Registro34793 crear_registro34793(int id) {
    Registro34793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34793(Registro34793 r) {
    return r.valor + r.id;
}
