// fichero 569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro569;

Registro569 crear_registro569(int id) {
    Registro569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro569(Registro569 r) {
    return r.valor + r.id;
}
