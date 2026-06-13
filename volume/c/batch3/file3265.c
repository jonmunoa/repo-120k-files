// fichero 3265 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro3265;

Registro3265 crear_registro3265(int id) {
    Registro3265 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro3265(Registro3265 r) {
    return r.valor + r.id;
}
