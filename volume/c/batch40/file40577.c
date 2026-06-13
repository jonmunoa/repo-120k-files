// fichero 40577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40577;

Registro40577 crear_registro40577(int id) {
    Registro40577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40577(Registro40577 r) {
    return r.valor + r.id;
}
