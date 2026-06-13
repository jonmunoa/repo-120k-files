// fichero 17781 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17781;

Registro17781 crear_registro17781(int id) {
    Registro17781 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17781(Registro17781 r) {
    return r.valor + r.id;
}
