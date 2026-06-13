// fichero 52753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52753;

Registro52753 crear_registro52753(int id) {
    Registro52753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52753(Registro52753 r) {
    return r.valor + r.id;
}
