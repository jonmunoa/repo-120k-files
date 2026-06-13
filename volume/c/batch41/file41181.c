// fichero 41181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41181;

Registro41181 crear_registro41181(int id) {
    Registro41181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41181(Registro41181 r) {
    return r.valor + r.id;
}
