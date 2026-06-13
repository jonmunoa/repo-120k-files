// fichero 41753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41753;

Registro41753 crear_registro41753(int id) {
    Registro41753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41753(Registro41753 r) {
    return r.valor + r.id;
}
