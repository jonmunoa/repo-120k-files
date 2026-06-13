// fichero 29921 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29921;

Registro29921 crear_registro29921(int id) {
    Registro29921 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29921(Registro29921 r) {
    return r.valor + r.id;
}
