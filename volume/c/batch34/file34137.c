// fichero 34137 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34137;

Registro34137 crear_registro34137(int id) {
    Registro34137 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34137(Registro34137 r) {
    return r.valor + r.id;
}
