// fichero 52993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52993;

Registro52993 crear_registro52993(int id) {
    Registro52993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52993(Registro52993 r) {
    return r.valor + r.id;
}
