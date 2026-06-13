// fichero 35265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35265;

Registro35265 crear_registro35265(int id) {
    Registro35265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35265(Registro35265 r) {
    return r.valor + r.id;
}
