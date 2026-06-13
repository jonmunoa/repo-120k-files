// fichero 17737 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17737;

Registro17737 crear_registro17737(int id) {
    Registro17737 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17737(Registro17737 r) {
    return r.valor + r.id;
}
