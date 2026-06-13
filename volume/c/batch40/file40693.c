// fichero 40693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40693;

Registro40693 crear_registro40693(int id) {
    Registro40693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40693(Registro40693 r) {
    return r.valor + r.id;
}
