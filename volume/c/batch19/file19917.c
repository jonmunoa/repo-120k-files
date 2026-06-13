// fichero 19917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19917;

Registro19917 crear_registro19917(int id) {
    Registro19917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19917(Registro19917 r) {
    return r.valor + r.id;
}
