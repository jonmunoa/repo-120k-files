// fichero 3981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3981;

Registro3981 crear_registro3981(int id) {
    Registro3981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3981(Registro3981 r) {
    return r.valor + r.id;
}
