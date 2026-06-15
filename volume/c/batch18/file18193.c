// fichero 18193 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18193;

Registro18193 crear_registro18193(int id) {
    Registro18193 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
