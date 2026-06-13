// fichero 3893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3893;

Registro3893 crear_registro3893(int id) {
    Registro3893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3893(Registro3893 r) {
    return r.valor + r.id;
}
