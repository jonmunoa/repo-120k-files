// fichero 34785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34785;

Registro34785 crear_registro34785(int id) {
    Registro34785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34785(Registro34785 r) {
    return r.valor + r.id;
}
