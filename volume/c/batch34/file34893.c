// fichero 34893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34893;

Registro34893 crear_registro34893(int id) {
    Registro34893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34893(Registro34893 r) {
    return r.valor + r.id;
}
