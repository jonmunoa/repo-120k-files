// fichero 38997 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38997;

Registro38997 crear_registro38997(int id) {
    Registro38997 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38997(Registro38997 r) {
    return r.valor + r.id;
}
