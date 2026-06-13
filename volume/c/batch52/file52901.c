// fichero 52901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52901;

Registro52901 crear_registro52901(int id) {
    Registro52901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52901(Registro52901 r) {
    return r.valor + r.id;
}
