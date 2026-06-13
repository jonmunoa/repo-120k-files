// fichero 41993 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro41993;

Registro41993 crear_registro41993(int id) {
    Registro41993 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro41993(Registro41993 r) {
    return r.valor + r.id;
}
