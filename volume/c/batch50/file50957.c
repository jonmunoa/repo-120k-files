// fichero 50957 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50957;

Registro50957 crear_registro50957(int id) {
    Registro50957 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50957(Registro50957 r) {
    return r.valor + r.id;
}
