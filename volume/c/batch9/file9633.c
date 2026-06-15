// fichero 9633 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9633;

Registro9633 crear_registro9633(int id) {
    Registro9633 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
