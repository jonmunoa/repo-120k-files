// fichero 28849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28849;

Registro28849 crear_registro28849(int id) {
    Registro28849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28849(Registro28849 r) {
    return r.valor + r.id;
}
