// fichero 10961 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10961;

Registro10961 crear_registro10961(int id) {
    Registro10961 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10961(Registro10961 r) {
    return r.valor + r.id;
}
