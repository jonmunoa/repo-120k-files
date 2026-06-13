// fichero 11201 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11201;

Registro11201 crear_registro11201(int id) {
    Registro11201 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11201(Registro11201 r) {
    return r.valor + r.id;
}
