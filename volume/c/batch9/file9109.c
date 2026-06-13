// fichero 9109 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9109;

Registro9109 crear_registro9109(int id) {
    Registro9109 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9109(Registro9109 r) {
    return r.valor + r.id;
}
