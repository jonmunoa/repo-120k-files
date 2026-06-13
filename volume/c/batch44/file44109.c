// fichero 44109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44109;

Registro44109 crear_registro44109(int id) {
    Registro44109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44109(Registro44109 r) {
    return r.valor + r.id;
}
