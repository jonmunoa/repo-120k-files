// fichero 23981 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23981;

Registro23981 crear_registro23981(int id) {
    Registro23981 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23981(Registro23981 r) {
    return r.valor + r.id;
}
