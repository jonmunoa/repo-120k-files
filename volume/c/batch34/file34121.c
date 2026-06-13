// fichero 34121 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34121;

Registro34121 crear_registro34121(int id) {
    Registro34121 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34121(Registro34121 r) {
    return r.valor + r.id;
}
