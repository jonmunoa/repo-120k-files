// fichero 49881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro49881;

Registro49881 crear_registro49881(int id) {
    Registro49881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro49881(Registro49881 r) {
    return r.valor + r.id;
}
