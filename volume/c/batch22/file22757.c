// fichero 22757 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22757;

Registro22757 crear_registro22757(int id) {
    Registro22757 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22757(Registro22757 r) {
    return r.valor + r.id;
}
