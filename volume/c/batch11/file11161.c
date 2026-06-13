// fichero 11161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11161;

Registro11161 crear_registro11161(int id) {
    Registro11161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11161(Registro11161 r) {
    return r.valor + r.id;
}
