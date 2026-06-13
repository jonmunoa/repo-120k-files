// fichero 36557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36557;

Registro36557 crear_registro36557(int id) {
    Registro36557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36557(Registro36557 r) {
    return r.valor + r.id;
}
