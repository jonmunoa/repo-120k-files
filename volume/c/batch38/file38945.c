// fichero 38945 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38945;

Registro38945 crear_registro38945(int id) {
    Registro38945 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38945(Registro38945 r) {
    return r.valor + r.id;
}
