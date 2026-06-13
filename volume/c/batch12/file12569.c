// fichero 12569 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro12569;

Registro12569 crear_registro12569(int id) {
    Registro12569 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro12569(Registro12569 r) {
    return r.valor + r.id;
}
