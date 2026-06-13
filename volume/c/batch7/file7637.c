// fichero 7637 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7637;

Registro7637 crear_registro7637(int id) {
    Registro7637 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7637(Registro7637 r) {
    return r.valor + r.id;
}
