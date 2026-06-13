// fichero 46873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro46873;

Registro46873 crear_registro46873(int id) {
    Registro46873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro46873(Registro46873 r) {
    return r.valor + r.id;
}
