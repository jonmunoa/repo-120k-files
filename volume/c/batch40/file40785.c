// fichero 40785 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro40785;

Registro40785 crear_registro40785(int id) {
    Registro40785 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro40785(Registro40785 r) {
    return r.valor + r.id;
}
