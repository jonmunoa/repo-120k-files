// fichero 44317 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44317;

Registro44317 crear_registro44317(int id) {
    Registro44317 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44317(Registro44317 r) {
    return r.valor + r.id;
}
