// fichero 40513 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40513;

Registro40513 crear_registro40513(int id) {
    Registro40513 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40513(Registro40513 r) {
    return r.valor + r.id;
}
