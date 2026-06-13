// fichero 41265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41265;

Registro41265 crear_registro41265(int id) {
    Registro41265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41265(Registro41265 r) {
    return r.valor + r.id;
}
