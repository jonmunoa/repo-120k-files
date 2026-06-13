// fichero 9785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9785;

Registro9785 crear_registro9785(int id) {
    Registro9785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9785(Registro9785 r) {
    return r.valor + r.id;
}
