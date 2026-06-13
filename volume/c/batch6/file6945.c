// fichero 6945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro6945;

Registro6945 crear_registro6945(int id) {
    Registro6945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro6945(Registro6945 r) {
    return r.valor + r.id;
}
