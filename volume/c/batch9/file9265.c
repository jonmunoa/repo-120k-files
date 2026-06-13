// fichero 9265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9265;

Registro9265 crear_registro9265(int id) {
    Registro9265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9265(Registro9265 r) {
    return r.valor + r.id;
}
