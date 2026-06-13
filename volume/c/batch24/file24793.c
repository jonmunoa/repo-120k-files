// fichero 24793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24793;

Registro24793 crear_registro24793(int id) {
    Registro24793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24793(Registro24793 r) {
    return r.valor + r.id;
}
