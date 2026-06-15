// fichero 10993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10993;

Registro10993 crear_registro10993(int id) {
    Registro10993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
