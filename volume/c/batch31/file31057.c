// fichero 31057 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31057;

Registro31057 crear_registro31057(int id) {
    Registro31057 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31057(Registro31057 r) {
    return r.valor + r.id;
}
