// fichero 41577 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41577;

Registro41577 crear_registro41577(int id) {
    Registro41577 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41577(Registro41577 r) {
    return r.valor + r.id;
}
