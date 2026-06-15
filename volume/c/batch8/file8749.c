// fichero 8749 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8749;

Registro8749 crear_registro8749(int id) {
    Registro8749 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
