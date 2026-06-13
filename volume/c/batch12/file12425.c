// fichero 12425 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12425;

Registro12425 crear_registro12425(int id) {
    Registro12425 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12425(Registro12425 r) {
    return r.valor + r.id;
}
