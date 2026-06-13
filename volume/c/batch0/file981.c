// fichero 981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro981;

Registro981 crear_registro981(int id) {
    Registro981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro981(Registro981 r) {
    return r.valor + r.id;
}
