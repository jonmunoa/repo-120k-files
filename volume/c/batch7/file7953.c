// fichero 7953 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro7953;

Registro7953 crear_registro7953(int id) {
    Registro7953 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro7953(Registro7953 r) {
    return r.valor + r.id;
}
