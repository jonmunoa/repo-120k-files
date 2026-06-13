// fichero 17721 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro17721;

Registro17721 crear_registro17721(int id) {
    Registro17721 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro17721(Registro17721 r) {
    return r.valor + r.id;
}
