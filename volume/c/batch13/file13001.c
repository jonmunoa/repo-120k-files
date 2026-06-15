// fichero 13001 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13001;

Registro13001 crear_registro13001(int id) {
    Registro13001 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
