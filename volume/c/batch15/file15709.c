// fichero 15709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15709;

Registro15709 crear_registro15709(int id) {
    Registro15709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15709(Registro15709 r) {
    return r.valor + r.id;
}
