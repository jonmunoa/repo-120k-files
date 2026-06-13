// fichero 44161 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44161;

Registro44161 crear_registro44161(int id) {
    Registro44161 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44161(Registro44161 r) {
    return r.valor + r.id;
}
