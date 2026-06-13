// fichero 1981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1981;

Registro1981 crear_registro1981(int id) {
    Registro1981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1981(Registro1981 r) {
    return r.valor + r.id;
}
