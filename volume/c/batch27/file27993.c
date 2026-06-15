// fichero 27993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27993;

Registro27993 crear_registro27993(int id) {
    Registro27993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
