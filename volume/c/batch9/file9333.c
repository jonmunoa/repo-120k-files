// fichero 9333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9333;

Registro9333 crear_registro9333(int id) {
    Registro9333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9333(Registro9333 r) {
    return r.valor + r.id;
}
