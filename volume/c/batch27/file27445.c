// fichero 27445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27445;

Registro27445 crear_registro27445(int id) {
    Registro27445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27445(Registro27445 r) {
    return r.valor + r.id;
}
