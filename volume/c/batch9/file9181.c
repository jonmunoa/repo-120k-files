// fichero 9181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9181;

Registro9181 crear_registro9181(int id) {
    Registro9181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9181(Registro9181 r) {
    return r.valor + r.id;
}
