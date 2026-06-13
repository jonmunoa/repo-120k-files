// fichero 27001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27001;

Registro27001 crear_registro27001(int id) {
    Registro27001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27001(Registro27001 r) {
    return r.valor + r.id;
}
