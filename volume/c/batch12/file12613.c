// fichero 12613 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12613;

Registro12613 crear_registro12613(int id) {
    Registro12613 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12613(Registro12613 r) {
    return r.valor + r.id;
}
