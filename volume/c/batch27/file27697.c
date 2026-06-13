// fichero 27697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27697;

Registro27697 crear_registro27697(int id) {
    Registro27697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27697(Registro27697 r) {
    return r.valor + r.id;
}
