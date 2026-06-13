// fichero 28693 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28693;

Registro28693 crear_registro28693(int id) {
    Registro28693 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28693(Registro28693 r) {
    return r.valor + r.id;
}
