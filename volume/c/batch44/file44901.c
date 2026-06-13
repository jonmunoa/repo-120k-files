// fichero 44901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44901;

Registro44901 crear_registro44901(int id) {
    Registro44901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44901(Registro44901 r) {
    return r.valor + r.id;
}
