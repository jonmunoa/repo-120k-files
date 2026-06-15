// fichero 11949 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11949;

Registro11949 crear_registro11949(int id) {
    Registro11949 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
