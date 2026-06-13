// fichero 34161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34161;

Registro34161 crear_registro34161(int id) {
    Registro34161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34161(Registro34161 r) {
    return r.valor + r.id;
}
