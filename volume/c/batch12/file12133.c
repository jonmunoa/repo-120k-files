// fichero 12133 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12133;

Registro12133 crear_registro12133(int id) {
    Registro12133 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12133(Registro12133 r) {
    return r.valor + r.id;
}
