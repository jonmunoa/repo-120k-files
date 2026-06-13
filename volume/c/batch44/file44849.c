// fichero 44849 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44849;

Registro44849 crear_registro44849(int id) {
    Registro44849 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44849(Registro44849 r) {
    return r.valor + r.id;
}
