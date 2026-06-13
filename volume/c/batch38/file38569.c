// fichero 38569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38569;

Registro38569 crear_registro38569(int id) {
    Registro38569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38569(Registro38569 r) {
    return r.valor + r.id;
}
