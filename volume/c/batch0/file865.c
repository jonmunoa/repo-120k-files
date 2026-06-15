// fichero 865 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro865;

Registro865 crear_registro865(int id) {
    Registro865 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
