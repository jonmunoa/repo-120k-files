// fichero 11753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11753;

Registro11753 crear_registro11753(int id) {
    Registro11753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11753(Registro11753 r) {
    return r.valor + r.id;
}
