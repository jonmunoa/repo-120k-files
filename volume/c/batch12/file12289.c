// fichero 12289 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12289;

Registro12289 crear_registro12289(int id) {
    Registro12289 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12289(Registro12289 r) {
    return r.valor + r.id;
}
