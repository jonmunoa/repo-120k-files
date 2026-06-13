// fichero 12049 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12049;

Registro12049 crear_registro12049(int id) {
    Registro12049 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12049(Registro12049 r) {
    return r.valor + r.id;
}
