// fichero 17161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17161;

Registro17161 crear_registro17161(int id) {
    Registro17161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17161(Registro17161 r) {
    return r.valor + r.id;
}
