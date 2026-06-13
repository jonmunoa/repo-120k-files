// fichero 12085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12085;

Registro12085 crear_registro12085(int id) {
    Registro12085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12085(Registro12085 r) {
    return r.valor + r.id;
}
