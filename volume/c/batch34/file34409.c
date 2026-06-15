// fichero 34409 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34409;

Registro34409 crear_registro34409(int id) {
    Registro34409 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
