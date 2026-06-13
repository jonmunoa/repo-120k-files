// fichero 33981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33981;

Registro33981 crear_registro33981(int id) {
    Registro33981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33981(Registro33981 r) {
    return r.valor + r.id;
}
