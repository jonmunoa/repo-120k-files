// fichero 41893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41893;

Registro41893 crear_registro41893(int id) {
    Registro41893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41893(Registro41893 r) {
    return r.valor + r.id;
}
