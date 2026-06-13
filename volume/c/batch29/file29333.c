// fichero 29333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29333;

Registro29333 crear_registro29333(int id) {
    Registro29333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29333(Registro29333 r) {
    return r.valor + r.id;
}
