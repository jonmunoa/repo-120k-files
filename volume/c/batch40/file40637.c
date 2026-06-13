// fichero 40637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40637;

Registro40637 crear_registro40637(int id) {
    Registro40637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40637(Registro40637 r) {
    return r.valor + r.id;
}
