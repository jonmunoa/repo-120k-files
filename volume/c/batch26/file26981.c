// fichero 26981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26981;

Registro26981 crear_registro26981(int id) {
    Registro26981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26981(Registro26981 r) {
    return r.valor + r.id;
}
