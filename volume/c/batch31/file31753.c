// fichero 31753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro31753;

Registro31753 crear_registro31753(int id) {
    Registro31753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro31753(Registro31753 r) {
    return r.valor + r.id;
}
