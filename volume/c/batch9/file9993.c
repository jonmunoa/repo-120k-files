// fichero 9993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9993;

Registro9993 crear_registro9993(int id) {
    Registro9993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9993(Registro9993 r) {
    return r.valor + r.id;
}
