// fichero 35917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35917;

Registro35917 crear_registro35917(int id) {
    Registro35917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35917(Registro35917 r) {
    return r.valor + r.id;
}
