// fichero 24637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24637;

Registro24637 crear_registro24637(int id) {
    Registro24637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24637(Registro24637 r) {
    return r.valor + r.id;
}
