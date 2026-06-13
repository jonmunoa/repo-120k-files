// fichero 23753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23753;

Registro23753 crear_registro23753(int id) {
    Registro23753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23753(Registro23753 r) {
    return r.valor + r.id;
}
