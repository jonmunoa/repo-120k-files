// fichero 8697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8697;

Registro8697 crear_registro8697(int id) {
    Registro8697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8697(Registro8697 r) {
    return r.valor + r.id;
}
