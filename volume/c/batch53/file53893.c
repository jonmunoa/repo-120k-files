// fichero 53893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53893;

Registro53893 crear_registro53893(int id) {
    Registro53893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53893(Registro53893 r) {
    return r.valor + r.id;
}
