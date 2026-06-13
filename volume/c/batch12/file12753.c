// fichero 12753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12753;

Registro12753 crear_registro12753(int id) {
    Registro12753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12753(Registro12753 r) {
    return r.valor + r.id;
}
