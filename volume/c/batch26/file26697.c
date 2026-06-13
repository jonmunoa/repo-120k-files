// fichero 26697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26697;

Registro26697 crear_registro26697(int id) {
    Registro26697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26697(Registro26697 r) {
    return r.valor + r.id;
}
