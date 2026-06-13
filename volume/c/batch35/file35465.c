// fichero 35465 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35465;

Registro35465 crear_registro35465(int id) {
    Registro35465 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35465(Registro35465 r) {
    return r.valor + r.id;
}
