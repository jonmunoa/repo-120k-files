// fichero 35841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35841;

Registro35841 crear_registro35841(int id) {
    Registro35841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35841(Registro35841 r) {
    return r.valor + r.id;
}
