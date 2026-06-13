// fichero 6753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6753;

Registro6753 crear_registro6753(int id) {
    Registro6753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6753(Registro6753 r) {
    return r.valor + r.id;
}
