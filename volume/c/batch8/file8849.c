// fichero 8849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8849;

Registro8849 crear_registro8849(int id) {
    Registro8849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8849(Registro8849 r) {
    return r.valor + r.id;
}
