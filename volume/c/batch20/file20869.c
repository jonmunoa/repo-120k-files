// fichero 20869 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro20869;

Registro20869 crear_registro20869(int id) {
    Registro20869 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro20869(Registro20869 r) {
    return r.valor + r.id;
}
