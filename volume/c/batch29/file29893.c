// fichero 29893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29893;

Registro29893 crear_registro29893(int id) {
    Registro29893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29893(Registro29893 r) {
    return r.valor + r.id;
}
