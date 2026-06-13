// fichero 50001 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro50001;

Registro50001 crear_registro50001(int id) {
    Registro50001 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro50001(Registro50001 r) {
    return r.valor + r.id;
}
