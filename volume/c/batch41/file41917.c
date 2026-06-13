// fichero 41917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41917;

Registro41917 crear_registro41917(int id) {
    Registro41917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41917(Registro41917 r) {
    return r.valor + r.id;
}
