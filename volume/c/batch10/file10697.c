// fichero 10697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10697;

Registro10697 crear_registro10697(int id) {
    Registro10697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10697(Registro10697 r) {
    return r.valor + r.id;
}
