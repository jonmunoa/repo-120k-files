// fichero 18777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18777;

Registro18777 crear_registro18777(int id) {
    Registro18777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18777(Registro18777 r) {
    return r.valor + r.id;
}
