// fichero 41961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41961;

Registro41961 crear_registro41961(int id) {
    Registro41961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41961(Registro41961 r) {
    return r.valor + r.id;
}
