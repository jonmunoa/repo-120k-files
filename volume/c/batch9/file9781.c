// fichero 9781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9781;

Registro9781 crear_registro9781(int id) {
    Registro9781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9781(Registro9781 r) {
    return r.valor + r.id;
}
