// fichero 9001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9001;

Registro9001 crear_registro9001(int id) {
    Registro9001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9001(Registro9001 r) {
    return r.valor + r.id;
}
