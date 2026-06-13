// fichero 12901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12901;

Registro12901 crear_registro12901(int id) {
    Registro12901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12901(Registro12901 r) {
    return r.valor + r.id;
}
