// fichero 1181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro1181;

Registro1181 crear_registro1181(int id) {
    Registro1181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro1181(Registro1181 r) {
    return r.valor + r.id;
}
