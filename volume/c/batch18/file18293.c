// fichero 18293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18293;

Registro18293 crear_registro18293(int id) {
    Registro18293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18293(Registro18293 r) {
    return r.valor + r.id;
}
