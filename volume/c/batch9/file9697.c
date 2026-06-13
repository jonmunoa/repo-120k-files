// fichero 9697 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9697;

Registro9697 crear_registro9697(int id) {
    Registro9697 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9697(Registro9697 r) {
    return r.valor + r.id;
}
