// fichero 47993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47993;

Registro47993 crear_registro47993(int id) {
    Registro47993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
