// fichero 11197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11197;

Registro11197 crear_registro11197(int id) {
    Registro11197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11197(Registro11197 r) {
    return r.valor + r.id;
}
