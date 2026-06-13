// fichero 7569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7569;

Registro7569 crear_registro7569(int id) {
    Registro7569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7569(Registro7569 r) {
    return r.valor + r.id;
}
