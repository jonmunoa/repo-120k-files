// fichero 38149 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38149;

Registro38149 crear_registro38149(int id) {
    Registro38149 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38149(Registro38149 r) {
    return r.valor + r.id;
}
