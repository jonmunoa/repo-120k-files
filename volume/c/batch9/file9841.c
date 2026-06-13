// fichero 9841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9841;

Registro9841 crear_registro9841(int id) {
    Registro9841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9841(Registro9841 r) {
    return r.valor + r.id;
}
