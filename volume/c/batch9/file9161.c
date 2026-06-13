// fichero 9161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9161;

Registro9161 crear_registro9161(int id) {
    Registro9161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9161(Registro9161 r) {
    return r.valor + r.id;
}
