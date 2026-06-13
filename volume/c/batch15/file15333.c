// fichero 15333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15333;

Registro15333 crear_registro15333(int id) {
    Registro15333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15333(Registro15333 r) {
    return r.valor + r.id;
}
