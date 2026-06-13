// fichero 49041 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49041;

Registro49041 crear_registro49041(int id) {
    Registro49041 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49041(Registro49041 r) {
    return r.valor + r.id;
}
