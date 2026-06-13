// fichero 7353 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7353;

Registro7353 crear_registro7353(int id) {
    Registro7353 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7353(Registro7353 r) {
    return r.valor + r.id;
}
