// fichero 35205 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35205;

Registro35205 crear_registro35205(int id) {
    Registro35205 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35205(Registro35205 r) {
    return r.valor + r.id;
}
