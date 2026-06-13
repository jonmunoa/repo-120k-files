// fichero 23837 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23837;

Registro23837 crear_registro23837(int id) {
    Registro23837 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23837(Registro23837 r) {
    return r.valor + r.id;
}
