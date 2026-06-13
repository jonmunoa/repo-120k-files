// fichero 14897 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14897;

Registro14897 crear_registro14897(int id) {
    Registro14897 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14897(Registro14897 r) {
    return r.valor + r.id;
}
