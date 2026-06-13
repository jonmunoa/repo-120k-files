// fichero 12961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12961;

Registro12961 crear_registro12961(int id) {
    Registro12961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12961(Registro12961 r) {
    return r.valor + r.id;
}
