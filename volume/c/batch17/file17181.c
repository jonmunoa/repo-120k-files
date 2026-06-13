// fichero 17181 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17181;

Registro17181 crear_registro17181(int id) {
    Registro17181 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17181(Registro17181 r) {
    return r.valor + r.id;
}
