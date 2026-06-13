// fichero 34565 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34565;

Registro34565 crear_registro34565(int id) {
    Registro34565 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34565(Registro34565 r) {
    return r.valor + r.id;
}
