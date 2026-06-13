// fichero 36669 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36669;

Registro36669 crear_registro36669(int id) {
    Registro36669 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36669(Registro36669 r) {
    return r.valor + r.id;
}
