// fichero 12761 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12761;

Registro12761 crear_registro12761(int id) {
    Registro12761 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12761(Registro12761 r) {
    return r.valor + r.id;
}
