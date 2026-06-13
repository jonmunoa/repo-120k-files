// fichero 50489 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50489;

Registro50489 crear_registro50489(int id) {
    Registro50489 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50489(Registro50489 r) {
    return r.valor + r.id;
}
