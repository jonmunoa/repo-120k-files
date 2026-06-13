// fichero 9917 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9917;

Registro9917 crear_registro9917(int id) {
    Registro9917 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9917(Registro9917 r) {
    return r.valor + r.id;
}
