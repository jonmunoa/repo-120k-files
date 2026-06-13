// fichero 12497 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12497;

Registro12497 crear_registro12497(int id) {
    Registro12497 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12497(Registro12497 r) {
    return r.valor + r.id;
}
