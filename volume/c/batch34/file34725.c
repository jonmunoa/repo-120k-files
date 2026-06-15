// fichero 34725 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34725;

Registro34725 crear_registro34725(int id) {
    Registro34725 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
