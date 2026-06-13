// fichero 753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro753;

Registro753 crear_registro753(int id) {
    Registro753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro753(Registro753 r) {
    return r.valor + r.id;
}
