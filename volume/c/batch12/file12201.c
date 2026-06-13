// fichero 12201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12201;

Registro12201 crear_registro12201(int id) {
    Registro12201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12201(Registro12201 r) {
    return r.valor + r.id;
}
