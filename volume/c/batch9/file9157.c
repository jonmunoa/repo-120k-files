// fichero 9157 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9157;

Registro9157 crear_registro9157(int id) {
    Registro9157 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9157(Registro9157 r) {
    return r.valor + r.id;
}
