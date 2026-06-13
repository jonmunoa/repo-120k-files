// fichero 26609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro26609;

Registro26609 crear_registro26609(int id) {
    Registro26609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro26609(Registro26609 r) {
    return r.valor + r.id;
}
