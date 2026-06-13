// fichero 35717 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35717;

Registro35717 crear_registro35717(int id) {
    Registro35717 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35717(Registro35717 r) {
    return r.valor + r.id;
}
