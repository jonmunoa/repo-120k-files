// fichero 9929 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9929;

Registro9929 crear_registro9929(int id) {
    Registro9929 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9929(Registro9929 r) {
    return r.valor + r.id;
}
