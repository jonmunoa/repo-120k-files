// fichero 27333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27333;

Registro27333 crear_registro27333(int id) {
    Registro27333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27333(Registro27333 r) {
    return r.valor + r.id;
}
