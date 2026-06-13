// fichero 15781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15781;

Registro15781 crear_registro15781(int id) {
    Registro15781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15781(Registro15781 r) {
    return r.valor + r.id;
}
