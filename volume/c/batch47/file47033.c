// fichero 47033 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47033;

Registro47033 crear_registro47033(int id) {
    Registro47033 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47033(Registro47033 r) {
    return r.valor + r.id;
}
