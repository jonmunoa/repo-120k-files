// fichero 50637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50637;

Registro50637 crear_registro50637(int id) {
    Registro50637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50637(Registro50637 r) {
    return r.valor + r.id;
}
