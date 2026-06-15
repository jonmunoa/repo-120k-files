// fichero 19465 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19465;

Registro19465 crear_registro19465(int id) {
    Registro19465 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
