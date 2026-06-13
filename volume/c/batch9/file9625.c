// fichero 9625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9625;

Registro9625 crear_registro9625(int id) {
    Registro9625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9625(Registro9625 r) {
    return r.valor + r.id;
}
