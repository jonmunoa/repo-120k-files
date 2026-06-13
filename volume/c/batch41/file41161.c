// fichero 41161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41161;

Registro41161 crear_registro41161(int id) {
    Registro41161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41161(Registro41161 r) {
    return r.valor + r.id;
}
