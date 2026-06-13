// fichero 7753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7753;

Registro7753 crear_registro7753(int id) {
    Registro7753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7753(Registro7753 r) {
    return r.valor + r.id;
}
