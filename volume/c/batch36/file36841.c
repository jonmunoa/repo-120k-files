// fichero 36841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36841;

Registro36841 crear_registro36841(int id) {
    Registro36841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36841(Registro36841 r) {
    return r.valor + r.id;
}
