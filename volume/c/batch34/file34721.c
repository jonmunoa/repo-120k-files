// fichero 34721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34721;

Registro34721 crear_registro34721(int id) {
    Registro34721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34721(Registro34721 r) {
    return r.valor + r.id;
}
