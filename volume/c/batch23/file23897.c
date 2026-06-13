// fichero 23897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23897;

Registro23897 crear_registro23897(int id) {
    Registro23897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23897(Registro23897 r) {
    return r.valor + r.id;
}
