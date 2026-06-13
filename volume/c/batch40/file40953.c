// fichero 40953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40953;

Registro40953 crear_registro40953(int id) {
    Registro40953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40953(Registro40953 r) {
    return r.valor + r.id;
}
