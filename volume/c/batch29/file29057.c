// fichero 29057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29057;

Registro29057 crear_registro29057(int id) {
    Registro29057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29057(Registro29057 r) {
    return r.valor + r.id;
}
