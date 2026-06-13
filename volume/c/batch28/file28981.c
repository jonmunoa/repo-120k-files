// fichero 28981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28981;

Registro28981 crear_registro28981(int id) {
    Registro28981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28981(Registro28981 r) {
    return r.valor + r.id;
}
