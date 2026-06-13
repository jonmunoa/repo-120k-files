// fichero 9445 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9445;

Registro9445 crear_registro9445(int id) {
    Registro9445 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9445(Registro9445 r) {
    return r.valor + r.id;
}
