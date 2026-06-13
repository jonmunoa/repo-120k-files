// fichero 9897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9897;

Registro9897 crear_registro9897(int id) {
    Registro9897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9897(Registro9897 r) {
    return r.valor + r.id;
}
