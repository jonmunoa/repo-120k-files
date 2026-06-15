// fichero 793 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro793;

Registro793 crear_registro793(int id) {
    Registro793 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
