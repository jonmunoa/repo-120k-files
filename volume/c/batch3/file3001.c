// fichero 3001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3001;

Registro3001 crear_registro3001(int id) {
    Registro3001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3001(Registro3001 r) {
    return r.valor + r.id;
}
