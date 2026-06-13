// fichero 36109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36109;

Registro36109 crear_registro36109(int id) {
    Registro36109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36109(Registro36109 r) {
    return r.valor + r.id;
}
