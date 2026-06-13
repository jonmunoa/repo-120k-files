// fichero 9753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9753;

Registro9753 crear_registro9753(int id) {
    Registro9753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9753(Registro9753 r) {
    return r.valor + r.id;
}
