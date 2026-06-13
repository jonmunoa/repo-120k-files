// fichero 27841 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27841;

Registro27841 crear_registro27841(int id) {
    Registro27841 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27841(Registro27841 r) {
    return r.valor + r.id;
}
