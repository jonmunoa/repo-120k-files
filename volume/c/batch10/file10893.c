// fichero 10893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10893;

Registro10893 crear_registro10893(int id) {
    Registro10893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10893(Registro10893 r) {
    return r.valor + r.id;
}
