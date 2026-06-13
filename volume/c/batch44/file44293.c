// fichero 44293 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44293;

Registro44293 crear_registro44293(int id) {
    Registro44293 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44293(Registro44293 r) {
    return r.valor + r.id;
}
