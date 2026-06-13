// fichero 9737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9737;

Registro9737 crear_registro9737(int id) {
    Registro9737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9737(Registro9737 r) {
    return r.valor + r.id;
}
