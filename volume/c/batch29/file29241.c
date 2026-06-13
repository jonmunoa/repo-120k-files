// fichero 29241 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29241;

Registro29241 crear_registro29241(int id) {
    Registro29241 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29241(Registro29241 r) {
    return r.valor + r.id;
}
