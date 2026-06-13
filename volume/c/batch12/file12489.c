// fichero 12489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12489;

Registro12489 crear_registro12489(int id) {
    Registro12489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12489(Registro12489 r) {
    return r.valor + r.id;
}
