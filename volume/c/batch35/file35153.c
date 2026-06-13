// fichero 35153 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35153;

Registro35153 crear_registro35153(int id) {
    Registro35153 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35153(Registro35153 r) {
    return r.valor + r.id;
}
