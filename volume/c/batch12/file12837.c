// fichero 12837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12837;

Registro12837 crear_registro12837(int id) {
    Registro12837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12837(Registro12837 r) {
    return r.valor + r.id;
}
