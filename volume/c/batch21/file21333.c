// fichero 21333 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21333;

Registro21333 crear_registro21333(int id) {
    Registro21333 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21333(Registro21333 r) {
    return r.valor + r.id;
}
