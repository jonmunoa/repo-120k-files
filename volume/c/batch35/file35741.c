// fichero 35741 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35741;

Registro35741 crear_registro35741(int id) {
    Registro35741 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35741(Registro35741 r) {
    return r.valor + r.id;
}
