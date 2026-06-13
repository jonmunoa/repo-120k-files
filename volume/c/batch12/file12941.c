// fichero 12941 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12941;

Registro12941 crear_registro12941(int id) {
    Registro12941 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12941(Registro12941 r) {
    return r.valor + r.id;
}
