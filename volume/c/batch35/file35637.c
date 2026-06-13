// fichero 35637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35637;

Registro35637 crear_registro35637(int id) {
    Registro35637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35637(Registro35637 r) {
    return r.valor + r.id;
}
