// fichero 36877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36877;

Registro36877 crear_registro36877(int id) {
    Registro36877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36877(Registro36877 r) {
    return r.valor + r.id;
}
