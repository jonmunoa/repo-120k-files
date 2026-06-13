// fichero 15325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15325;

Registro15325 crear_registro15325(int id) {
    Registro15325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15325(Registro15325 r) {
    return r.valor + r.id;
}
