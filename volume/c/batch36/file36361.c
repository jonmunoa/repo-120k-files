// fichero 36361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36361;

Registro36361 crear_registro36361(int id) {
    Registro36361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36361(Registro36361 r) {
    return r.valor + r.id;
}
