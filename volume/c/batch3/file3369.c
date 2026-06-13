// fichero 3369 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3369;

Registro3369 crear_registro3369(int id) {
    Registro3369 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3369(Registro3369 r) {
    return r.valor + r.id;
}
