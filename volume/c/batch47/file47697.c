// fichero 47697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47697;

Registro47697 crear_registro47697(int id) {
    Registro47697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47697(Registro47697 r) {
    return r.valor + r.id;
}
