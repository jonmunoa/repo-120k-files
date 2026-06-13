// fichero 44913 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44913;

Registro44913 crear_registro44913(int id) {
    Registro44913 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44913(Registro44913 r) {
    return r.valor + r.id;
}
