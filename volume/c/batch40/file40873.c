// fichero 40873 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40873;

Registro40873 crear_registro40873(int id) {
    Registro40873 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40873(Registro40873 r) {
    return r.valor + r.id;
}
