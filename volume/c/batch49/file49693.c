// fichero 49693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49693;

Registro49693 crear_registro49693(int id) {
    Registro49693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49693(Registro49693 r) {
    return r.valor + r.id;
}
