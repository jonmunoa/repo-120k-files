// fichero 18993 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18993;

Registro18993 crear_registro18993(int id) {
    Registro18993 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
