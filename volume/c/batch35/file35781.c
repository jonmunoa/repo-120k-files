// fichero 35781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro35781;

Registro35781 crear_registro35781(int id) {
    Registro35781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro35781(Registro35781 r) {
    return r.valor + r.id;
}
