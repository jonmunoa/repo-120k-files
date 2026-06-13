// fichero 50505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50505;

Registro50505 crear_registro50505(int id) {
    Registro50505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50505(Registro50505 r) {
    return r.valor + r.id;
}
