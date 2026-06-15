// fichero 47361 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47361;

Registro47361 crear_registro47361(int id) {
    Registro47361 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
