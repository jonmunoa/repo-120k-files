// fichero 2417 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2417;

Registro2417 crear_registro2417(int id) {
    Registro2417 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2417(Registro2417 r) {
    return r.valor + r.id;
}
