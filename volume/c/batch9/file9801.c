// fichero 9801 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9801;

Registro9801 crear_registro9801(int id) {
    Registro9801 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9801(Registro9801 r) {
    return r.valor + r.id;
}
