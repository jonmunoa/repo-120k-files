// fichero 28785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28785;

Registro28785 crear_registro28785(int id) {
    Registro28785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28785(Registro28785 r) {
    return r.valor + r.id;
}
