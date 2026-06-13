// fichero 41121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41121;

Registro41121 crear_registro41121(int id) {
    Registro41121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41121(Registro41121 r) {
    return r.valor + r.id;
}
