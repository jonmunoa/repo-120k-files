// fichero 18709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18709;

Registro18709 crear_registro18709(int id) {
    Registro18709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18709(Registro18709 r) {
    return r.valor + r.id;
}
