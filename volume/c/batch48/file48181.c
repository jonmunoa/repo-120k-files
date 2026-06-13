// fichero 48181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48181;

Registro48181 crear_registro48181(int id) {
    Registro48181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48181(Registro48181 r) {
    return r.valor + r.id;
}
