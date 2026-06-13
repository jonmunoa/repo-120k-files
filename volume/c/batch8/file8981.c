// fichero 8981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8981;

Registro8981 crear_registro8981(int id) {
    Registro8981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8981(Registro8981 r) {
    return r.valor + r.id;
}
