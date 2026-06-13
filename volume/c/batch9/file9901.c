// fichero 9901 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9901;

Registro9901 crear_registro9901(int id) {
    Registro9901 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9901(Registro9901 r) {
    return r.valor + r.id;
}
