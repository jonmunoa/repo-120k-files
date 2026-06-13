// fichero 35893 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35893;

Registro35893 crear_registro35893(int id) {
    Registro35893 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35893(Registro35893 r) {
    return r.valor + r.id;
}
