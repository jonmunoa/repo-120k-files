// fichero 41737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41737;

Registro41737 crear_registro41737(int id) {
    Registro41737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41737(Registro41737 r) {
    return r.valor + r.id;
}
