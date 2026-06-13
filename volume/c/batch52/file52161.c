// fichero 52161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52161;

Registro52161 crear_registro52161(int id) {
    Registro52161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52161(Registro52161 r) {
    return r.valor + r.id;
}
