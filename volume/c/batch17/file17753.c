// fichero 17753 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17753;

Registro17753 crear_registro17753(int id) {
    Registro17753 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17753(Registro17753 r) {
    return r.valor + r.id;
}
