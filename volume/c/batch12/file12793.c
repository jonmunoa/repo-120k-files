// fichero 12793 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12793;

Registro12793 crear_registro12793(int id) {
    Registro12793 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12793(Registro12793 r) {
    return r.valor + r.id;
}
