// fichero 40361 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40361;

Registro40361 crear_registro40361(int id) {
    Registro40361 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40361(Registro40361 r) {
    return r.valor + r.id;
}
