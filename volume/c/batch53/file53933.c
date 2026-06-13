// fichero 53933 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53933;

Registro53933 crear_registro53933(int id) {
    Registro53933 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53933(Registro53933 r) {
    return r.valor + r.id;
}
