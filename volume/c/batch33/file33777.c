// fichero 33777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33777;

Registro33777 crear_registro33777(int id) {
    Registro33777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33777(Registro33777 r) {
    return r.valor + r.id;
}
