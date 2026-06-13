// fichero 9893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9893;

Registro9893 crear_registro9893(int id) {
    Registro9893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9893(Registro9893 r) {
    return r.valor + r.id;
}
