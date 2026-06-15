// fichero 9717 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9717;

Registro9717 crear_registro9717(int id) {
    Registro9717 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
