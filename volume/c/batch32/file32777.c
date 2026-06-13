// fichero 32777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32777;

Registro32777 crear_registro32777(int id) {
    Registro32777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32777(Registro32777 r) {
    return r.valor + r.id;
}
