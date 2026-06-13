// fichero 9705 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9705;

Registro9705 crear_registro9705(int id) {
    Registro9705 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9705(Registro9705 r) {
    return r.valor + r.id;
}
