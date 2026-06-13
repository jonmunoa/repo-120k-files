// fichero 21893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21893;

Registro21893 crear_registro21893(int id) {
    Registro21893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21893(Registro21893 r) {
    return r.valor + r.id;
}
