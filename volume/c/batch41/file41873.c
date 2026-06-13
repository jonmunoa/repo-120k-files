// fichero 41873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41873;

Registro41873 crear_registro41873(int id) {
    Registro41873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41873(Registro41873 r) {
    return r.valor + r.id;
}
