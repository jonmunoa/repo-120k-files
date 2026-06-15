// fichero 34705 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34705;

Registro34705 crear_registro34705(int id) {
    Registro34705 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
