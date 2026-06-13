// fichero 12513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12513;

Registro12513 crear_registro12513(int id) {
    Registro12513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12513(Registro12513 r) {
    return r.valor + r.id;
}
