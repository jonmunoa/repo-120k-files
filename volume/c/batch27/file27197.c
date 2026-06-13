// fichero 27197 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27197;

Registro27197 crear_registro27197(int id) {
    Registro27197 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27197(Registro27197 r) {
    return r.valor + r.id;
}
