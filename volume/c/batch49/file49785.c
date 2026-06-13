// fichero 49785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49785;

Registro49785 crear_registro49785(int id) {
    Registro49785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49785(Registro49785 r) {
    return r.valor + r.id;
}
