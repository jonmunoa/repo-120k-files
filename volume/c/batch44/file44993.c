// fichero 44993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44993;

Registro44993 crear_registro44993(int id) {
    Registro44993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44993(Registro44993 r) {
    return r.valor + r.id;
}
