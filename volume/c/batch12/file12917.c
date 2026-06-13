// fichero 12917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12917;

Registro12917 crear_registro12917(int id) {
    Registro12917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12917(Registro12917 r) {
    return r.valor + r.id;
}
