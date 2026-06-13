// fichero 19777 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19777;

Registro19777 crear_registro19777(int id) {
    Registro19777 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19777(Registro19777 r) {
    return r.valor + r.id;
}
