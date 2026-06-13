// fichero 12893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12893;

Registro12893 crear_registro12893(int id) {
    Registro12893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12893(Registro12893 r) {
    return r.valor + r.id;
}
