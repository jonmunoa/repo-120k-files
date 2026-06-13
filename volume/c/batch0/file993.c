// fichero 993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro993;

Registro993 crear_registro993(int id) {
    Registro993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro993(Registro993 r) {
    return r.valor + r.id;
}
