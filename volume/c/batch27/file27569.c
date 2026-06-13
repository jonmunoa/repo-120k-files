// fichero 27569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27569;

Registro27569 crear_registro27569(int id) {
    Registro27569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27569(Registro27569 r) {
    return r.valor + r.id;
}
