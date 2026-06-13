// fichero 20669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20669;

Registro20669 crear_registro20669(int id) {
    Registro20669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20669(Registro20669 r) {
    return r.valor + r.id;
}
