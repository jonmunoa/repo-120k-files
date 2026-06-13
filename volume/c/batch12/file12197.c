// fichero 12197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12197;

Registro12197 crear_registro12197(int id) {
    Registro12197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12197(Registro12197 r) {
    return r.valor + r.id;
}
