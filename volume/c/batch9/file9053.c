// fichero 9053 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9053;

Registro9053 crear_registro9053(int id) {
    Registro9053 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9053(Registro9053 r) {
    return r.valor + r.id;
}
