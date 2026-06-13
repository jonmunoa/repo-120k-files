// fichero 9085 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9085;

Registro9085 crear_registro9085(int id) {
    Registro9085 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9085(Registro9085 r) {
    return r.valor + r.id;
}
